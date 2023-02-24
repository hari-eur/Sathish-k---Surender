
#include <stdio.h>

int main()
{
    unsigned long long int max_count;
    scanf("%llu", &max_count);
    
    unsigned long long int counter = 1;
    
    while(1){
        printf("Count %llu\n",counter);
        if(counter == max_count){
            break;
        }
        counter++;
    }
    
    return 0;
}
