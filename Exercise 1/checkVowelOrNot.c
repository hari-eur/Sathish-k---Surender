
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char ch = getchar();
    
    if( isalpha(ch) ){
        printf("The given character is a ");
        if(ch == 'a' || ch == 'e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("vowel");
        else
        printf("consonant");
    }else{
        printf("Invalid input - Not a alphabet");
    }
    
    return 0;
}
