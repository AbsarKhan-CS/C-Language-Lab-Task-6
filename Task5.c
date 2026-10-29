#include <stdio.h>

int main() {
    int rooms[4][6];
    int vacantCount, maxVacant = -1;
    int bestFloor = 0;

    printf("Enter 1 for occupied and 0 for vacant rooms:\n");


    for (int i = 0; i < 4; i++) {
        printf("Floor %d:\n", i + 1);

        for (int j = 0; j < 6; j++) {
            printf("Room %d: ", j + 1);
            scanf("%d", &rooms[i][j]);
        }
    }


    for (int i = 0; i < 4; i++) {
        vacantCount = 0;

        for (int j = 0; j < 6; j++) {
            if (rooms[i][j] == 0) {
                vacantCount++;
            }
        }

        printf("Floor %d has %d vacant rooms.\n",
               i + 1, vacantCount);

        if (vacantCount > maxVacant) {
            maxVacant = vacantCount;
            bestFloor = i;
        }
    }

    printf("\nFloor with the most vacancies: Floor %d\n",
           bestFloor + 1);
    printf("Vacant rooms: %d\n", maxVacant);


    printf("\n--- Consecutive Vacant Rooms ---\n");

    int found = 0;

    for (int i = 0; i < 4; i++) {
        int count = 0;

        for (int j = 0; j < 6; j++) {
            if (rooms[i][j] == 0) {
                count++;

                if (count == 3) {
                    printf("Floor %d, starting room %d\n",
                           i + 1, j - 1);
                    found = 1;
                }
            } else {
                count = 0;
            }
        }
    }

    if (found == 0) {
        printf("No 3 consecutive vacant rooms found.\n");
    }

    return 0;
}
