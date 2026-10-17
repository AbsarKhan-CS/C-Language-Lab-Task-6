#include <stdio.h>
int main(){
    int seats[5][8];
    char BookedSeats[5][8];
    int totalFreeSeats = 0;
    printf("Enter 0 if you dont want to book the ticket\nEnter 1 if you want to book the ticket\n");
    for(int i = 0;i<5;i++){
        for(int j = 0;j<8;j++){
            scanf("%d",&seats[i][j]);
        }
    }
    printf("---screen---\n");
    for(int i = 0;i<5;i++){
        for(int j = 0;j<8;j++){
            printf("%d ",seats[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i<5;i++){
        for(int j = 0;j<8;j++){
          if(seats[i][j] == 0){
            BookedSeats[i][j] = '.';
          }else{
            BookedSeats[i][j] = 'X';
          }  
        
        }
    }
    printf(" ----screen----\n");
    for(int i = 0;i<5;i++){
        for(int j = 0;j<8;j++){
            printf("%c ",BookedSeats[i][j]);
        }
        printf("\n");
    }
     printf("\n--- Free Seats Report ---\n");

    for (int i = 0; i < 5; i++) {
        int rowFreeSeats = 0;

        for (int j = 0; j < 8; j++) {
            if (seats[i][j] == 0) {
                rowFreeSeats++;
            }
        }

        printf("Row %d: %d free seats\n", i + 1, rowFreeSeats);
        totalFreeSeats += rowFreeSeats;
    }

    printf("Total free seats: %d\n", totalFreeSeats);

    return 0;
    
    
    
    return 0;
}