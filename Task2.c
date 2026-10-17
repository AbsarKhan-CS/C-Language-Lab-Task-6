#include <stdio.h>
int main(){
    int marks[6][4],t1 = 0,t2 = 0,t3 = 0,t4 = 0,t5 = 0,t6 = 0;
    int SubT1 = 0,SubT2 = 0,SubT3 = 0,SubT4 = 0;
    float Avg1,Avg2,Avg3,Avg4,Avg5,Avg6;
    printf("Enter Students Marks : \n");
    for(int i = 0;i<6;i++){
        for(int j = 0;j<4;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i = 0;i<1;i++){
        for(int j = 0;j<4;j++){
            t1 += marks[0][j];
        }
    }
    for(int i = 0;i<1;i++){
        for(int j = 0;j<4;j++){
            t2 += marks[1][j];
        }
    }
    for(int i = 0;i<1;i++){
        for(int j = 0;j<4;j++){
            t3 += marks[2][j];
        }
    }
    for(int i = 0;i<1;i++){
        for(int j = 0;j<4;j++){
            t4 += marks[3][j];
        }
    }
    for(int i = 0;i<1;i++){
        for(int j = 0;j<4;j++){
            t5 += marks[4][j];
        }
    } 
    for(int i = 0;i<1;i++){
        for(int j = 0;j<4;j++){
            t6 += marks[5][j];
        }
    }
    printf("\n");
    for(int i = 0;i<6;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    Avg1 = t1/4;
    Avg2 = t2/4;
    Avg3 = t3/4;
    Avg4 = t4/4;
    Avg5 = t5/4;
    Avg6 = t6/4;
    
    for(int i = 0; i<6;i++){
        SubT1 += marks[i][0];
    }
    printf("\n");
    printf("%d\n",SubT1);
    printf("%d\n",t1);
    printf("%d\n",t2);
    printf("%d\n",t3);
    printf("%d\n",t4);
    printf("%d\n",t5);
    printf("%d\n",t6);
    
    return 0;
}