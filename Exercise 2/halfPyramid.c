#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    
    printf("Half pyramid using for loop :\n");
    for(int i = 1 ; i <= rows ; i++){
        for(int star = 1 ; star <= i ; star++){
            printf(" * ");
        }
        printf("\n");
    }

    printf("Half pyramid using while loop :\n");
    int j = 1;
    while(j <= rows){
        int star = 1;
        while(star <= j){
            printf(" * ");
            star++;
        }
        printf("\n");
        j++;
    }

    return 0;
}
