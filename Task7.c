#include <stdio.h>

int main() {
    int marks[3][4][5];
    int d, s, sub;
    float studentAvg, deptAvg;
    float deptTotal[3] = {0};
    float highestDeptAvg = 0;
    int topper[3];
    float highestMarks;


    for (d = 0; d < 3; d++) {
        printf("\nDepartment %d:\n", d + 1);

        for (s = 0; s < 4; s++) {
            printf("Enter marks for Student %d (5 subjects): ", s + 1);

            for (sub = 0; sub < 5; sub++) {
                scanf("%d", &marks[d][s][sub]);
            }
        }
    }


    for (d = 0; d < 3; d++) {
        highestMarks = -1;
        topper[d] = 0;

        printf("\n--- Department %d Results ---\n", d + 1);

        for (s = 0; s < 4; s++) {
            int total = 0;
            int fail = 0;

            for (sub = 0; sub < 5; sub++) {
                total += marks[d][s][sub];

                if (marks[d][s][sub] < 40) {
                    fail = 1;
                }
            }

            studentAvg = total / 5.0;
            deptTotal[d] += studentAvg;

            printf("Student %d Average: %.2f", s + 1, studentAvg);

            if (fail) {
                printf(" - FAIL");
            }

            printf("\n");

            if (studentAvg > highestMarks) {
                highestMarks = studentAvg;
                topper[d] = s;
            }
        }

        printf("Department %d Topper: Student %d (Average: %.2f)\n",
               d + 1, topper[d] + 1, highestMarks);
    }

  
    int highestDept = 0;

    for (d = 0; d < 3; d++) {
        deptAvg = deptTotal[d] / 4.0;

        printf("\nDepartment %d Overall Average: %.2f\n",
               d + 1, deptAvg);

        if (d == 0 || deptAvg > highestDeptAvg) {
            highestDeptAvg = deptAvg;
            highestDept = d;
        }
    }

    printf("\nDepartment with Highest Overall Average: Department %d",
           highestDept + 1);
    printf("\nHighest Average: %.2f\n", highestDeptAvg);

    return 0;
}
