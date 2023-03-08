#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    
    printf("Full pyramid using for loop :\n");
    for(int i = 1 ; i <= rows ; i++){
        for(int space = 1 ; space <= rows - i ; space++){
            printf("   ");
        }
        for(int star = 1 ; star <= 2*i-1 ; star++){
            printf(" * ");
        }
        printf("\n");
    }

    printf("Full pyramid using while loop :\n");
    int j = 1;
    while(j <= rows){
        int space = 1;
        while(space <= rows-j){
            printf("   ");
            space++;
        }
        int star = 1;
        while(star <= 2*j-1){
            printf(" * ");
            star++;
        }
        printf("\n");
        j++;
    }

    return 0;
}
