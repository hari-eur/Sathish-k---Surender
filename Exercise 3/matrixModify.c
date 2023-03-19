

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of matrix : ");
    scanf("%d",&size);
    
    int element;
    printf("Enter the element to be found : ");
    scanf("%d", &element);
    
    int mat[size][size];
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(int i=1;i<size;i++){
        for(int j=0;j<size;j++){
            if(mat[i][j] == element){
                mat[i][j] = mat[i-1][j];
            }
        }
    }
    
    printf("\nMatrix : \n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
