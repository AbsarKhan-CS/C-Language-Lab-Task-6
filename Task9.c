#include <stdio.h>

int main() {
    char titles[5][50];
    int copies[5];
    int i, j, vowels;
    char letter, ch;
    int maxIndex = 0;
    int found;


    for (i = 0; i < 5; i++) {
        printf("\nEnter title of book %d: ", i + 1);
        scanf(" %[^\n]", titles[i]);

        printf("Enter number of copies: ");
        scanf("%d", &copies[i]);
    }


    printf("\n========== LIBRARY CATALOG ==========\n");
    printf("%-5s %-30s %-10s\n", "No.", "Book Title", "Copies");
    printf("-----------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-5d %-30s %-10d\n",
               i + 1, titles[i], copies[i]);
    }


    printf("\n========== VOWEL COUNTS ==========\n");

    for (i = 0; i < 5; i++) {
        vowels = 0;

        for (j = 0; titles[i][j] != '\0'; j++) {
            ch = titles[i][j];


            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            }
        }

        printf("%s: %d vowels\n", titles[i], vowels);
    }


    printf("\nEnter a letter to search titles: ");
    scanf(" %c", &letter);


    if (letter >= 'A' && letter <= 'Z') {
        letter = letter + 32;
    }

    printf("\nTitles starting with '%c':\n", letter);
    found = 0;

    for (i = 0; i < 5; i++) {
        ch = titles[i][0];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch == letter) {
            printf("%s\n", titles[i]);
            found = 1;
        }
    }

    if (found == 0) {
        printf("No titles start with '%c'.\n", letter);
    }


    for (i = 1; i < 5; i++) {
        if (copies[i] > copies[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("\n========== MOST COPIES ==========\n");
    printf("Title: %s\n", titles[maxIndex]);
    printf("Number of copies: %d\n", copies[maxIndex]);

    return 0;
}
