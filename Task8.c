#include <stdio.h>

int main() {
    int stock[3][4][5];
    int b, sh, sl;
    int buildingTotal;
    int shelfTotal;
    int maxStock = -1;
    int fullestBuilding = 0, fullestShelf = 0;


    for (b = 0; b < 3; b++) {
        printf("\nBuilding %d:\n", b + 1);

        for (sh = 0; sh < 4; sh++) {
            printf("Shelf %d:\n", sh + 1);

            for (sl = 0; sl < 5; sl++) {
                printf("Enter stock for slot %d: ", sl + 1);
                scanf("%d", &stock[b][sh][sl]);
            }
        }
    }


    printf("\n--- Total Stock per Building ---\n");

    for (b = 0; b < 3; b++) {
        buildingTotal = 0;

        for (sh = 0; sh < 4; sh++) {
            for (sl = 0; sl < 5; sl++) {
                buildingTotal += stock[b][sh][sl];
            }
        }

        printf("Building %d Total Stock: %d\n",
               b + 1, buildingTotal);
    }


    for (b = 0; b < 3; b++) {
        for (sh = 0; sh < 4; sh++) {
            shelfTotal = 0;

            for (sl = 0; sl < 5; sl++) {
                shelfTotal += stock[b][sh][sl];
            }

            if (shelfTotal > maxStock) {
                maxStock = shelfTotal;
                fullestBuilding = b;
                fullestShelf = sh;
            }
        }
    }

    printf("\n--- Fullest Shelf ---\n");
    printf("Building: %d\n", fullestBuilding + 1);
    printf("Shelf: %d\n", fullestShelf + 1);
    printf("Total Items: %d\n", maxStock);

  
    printf("\n--- Slots Needing Restock ---\n");

    int found = 0;

    for (b = 0; b < 3; b++) {
        for (sh = 0; sh < 4; sh++) {
            for (sl = 0; sl < 5; sl++) {
                if (stock[b][sh][sl] < 5) {
                    printf("[%d][%d][%d] = %d items - needs restock\n",
                           b + 1, sh + 1, sl + 1,
                           stock[b][sh][sl]);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("No slots need restocking.\n");
    }

    return 0;
}
