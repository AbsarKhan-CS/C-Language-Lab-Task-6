#include <stdio.h>

int main() {
    int sales[3][5];
    int branchTotal, productTotal;
    int bestBranch = 0;
    int lowestProduct = 0;
    int lowestSales;


    printf("Enter sales of 5 products for 3 branches:\n");

    for (int i = 0; i < 3; i++) {
        printf("Branch %d:\n", i + 1);

        for (int j = 0; j < 5; j++) {
            printf("Product %d: ", j + 1);
            scanf("%d", &sales[i][j]);
        }
    }

  
    printf("\n--- Total Sales Per Branch ---\n");

    int branchTotals[3];

    for (int i = 0; i < 3; i++) {
        branchTotal = 0;

        for (int j = 0; j < 5; j++) {
            branchTotal += sales[i][j];
        }

        branchTotals[i] = branchTotal;
        printf("Branch %d: %d\n", i + 1, branchTotal);
    }

    
    for (int i = 1; i < 3; i++) {
        if (branchTotals[i] > branchTotals[bestBranch]) {
            bestBranch = i;
        }
    }

    printf("\nBest-selling branch: Branch %d\n",
           bestBranch + 1);
    printf("Total sales: %d\n", branchTotals[bestBranch]);

    
    printf("\n--- Total Sales Per Product ---\n");

    int productTotals[5];

    for (int j = 0; j < 5; j++) {
        productTotal = 0;

        for (int i = 0; i < 3; i++) {
            productTotal += sales[i][j];
        }

        productTotals[j] = productTotal;
        printf("Product %d: %d\n", j + 1, productTotal);
    }


    lowestSales = productTotals[0];

    for (int j = 1; j < 5; j++) {
        if (productTotals[j] < lowestSales) {
            lowestSales = productTotals[j];
            lowestProduct = j;
        }
    }

    printf("\nProduct with lowest sales: Product %d\n",
           lowestProduct + 1);
    printf("Total sales: %d\n", lowestSales);

    return 0;
}
