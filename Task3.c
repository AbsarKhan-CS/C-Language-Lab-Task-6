#include <stdio.h>

int main() {
    int temp[7][4];

    char *days[] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    char *times[] = {
        "Morning", "Noon", "Evening", "Night"
    };

    int hottest, coldest;
    int hotDay = 0, hotTime = 0;
    int coldDay = 0, coldTime = 0;
    int noonTotal = 0;
    float noonAverage;

    printf("Enter temperatures for 7 days:\n");
    printf("Time slots: Morning, Noon, Evening, Night\n");


    for (int i = 0; i < 7; i++) {
        printf("%s:\n", days[i]);

        for (int j = 0; j < 4; j++) {
            printf("%s: ", times[j]);
            scanf("%d", &temp[i][j]);
        }
    }

 
    hottest = temp[0][0];
    coldest = temp[0][0];

  
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++) {

            if (temp[i][j] > hottest) {
                hottest = temp[i][j];
                hotDay = i;
                hotTime = j;
            }

            if (temp[i][j] < coldest) {
                coldest = temp[i][j];
                coldDay = i;
                coldTime = j;
            }
        }

        noonTotal += temp[i][1];
    }

  
    noonAverage = noonTotal / 7.0;

    printf("\n--- Weekly Temperature Report ---\n");

    printf("Hottest temperature: %d\n", hottest);
    printf("Day: %s, Time: %s\n",
           days[hotDay], times[hotTime]);

    printf("\nColdest temperature: %d\n", coldest);
    printf("Day: %s, Time: %s\n",
           days[coldDay], times[coldTime]);

    
    printf("\nWeekly noon average: %.2f\n", noonAverage);


    printf("\nDays with noon temperature above average:\n");

    for (int i = 0; i < 7; i++) {
        if (temp[i][1] > noonAverage) {
            printf("%s: %d\n", days[i], temp[i][1]);
        }
    }

    return 0;
}
