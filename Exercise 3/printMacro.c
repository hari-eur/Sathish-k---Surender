#include <stdarg.h>
#include <stdio.h>

#define show(word) printf("%s\n",word);
#define print(...) printf(__VA_ARGS__)

void display(int num, ...){
    va_list arguments;                     
    va_start ( arguments , num);           
    for ( int x = 0; x < num; x++ )        
    {
     show(va_arg(arguments, char*)) ; 
    }
    va_end ( arguments );                  
}

int main()
{
    printf("Way 1 \n");
    display(2,"Sathish","kumar");
    display(5,"EmbedUR","Computer","Science","C","Programming");
    
    printf("\nWay 2\n");
    char data[50],data_1[50],data_2[50];
	scanf("%s %s %s",data,data_1,data_2);
	print("Welcome to %s",data);
	print("Hello to %s Welcome to %s",data_1,data_2);
    
    
    return 0;
}
