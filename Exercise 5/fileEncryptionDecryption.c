#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char res, filename[100];
    do{
        printf("Enter\n");
        printf("\tE to encrypt\n");
        printf("\tD to decrypt  \n");
        printf("\tQ to quit\n\n");
        scanf(" %c",&res);
        
        if(res != 'Q'){
            if(res == 'E' || res =='e'){
                printf("Enter the file to be Encrypted:");
                scanf("%s",filename);
                FILE *fp = fopen(filename,"r");
                
                if(fp == NULL){
                    printf("File Not Found :(\n\n");
                }else{
                    
                    char encryptedFilename[100];
                    char format[5];
                    
                    int i=0,j=0;
                    while(filename[i]!='.'){
                        encryptedFilename[i] = filename[i];
                        i++;
                    }
                    while(filename[i]!='\0'){
                        format[j]=filename[i];
                        i++;
                        j++;
                    }
                    strcat(encryptedFilename,"_encrypted");
                    strcat(encryptedFilename,format);
                    FILE *fnew = fopen(encryptedFilename,"w");
                    char ch;
                    while( (ch = fgetc(fp)) != EOF){
                        if(ch != ' '){
                            int sec = (int)ch+25;
                            if(isupper(ch)){
                                char secCh = 90 - (sec%90);
                                fputc(secCh,fnew);
                            }else if(islower(ch)){
                                char secCh = 122 - (sec%122);
                                fputc(secCh,fnew);
                            }
                        }else{
                            fputc(ch,fnew);
                        }
                    }
                    printf("Encrypted File is %s\n",encryptedFilename);
                }
                
            }else if(res == 'D' || res == 'd'){
                
                printf("Enter the file to be decrypted:");
                scanf("%s",filename);
                FILE *fp = fopen(filename,"r");
                
                if(fp == NULL){
                    printf("File Not Found :(\n\n");
                }else{
                
                    char decryptedFilename[100];
                    char format[5];
                        
                    int i=0,j=0;
                    while(filename[i]!='_'){
                        decryptedFilename[i] = filename[i];
                        i++;
                    }
                    
                    strcat(decryptedFilename,"_decrypted.txt");
                    
                    FILE *fnew = fopen(decryptedFilename,"w");
                    char ch;
                    while( (ch = fgetc(fp)) != EOF){
                      
                        if(ch != ' '){
                            int sec = (int)ch-25;
                            if(isupper(ch)){
                                char secCh = 65 + (65%sec);
                                fputc(secCh,fnew);
                            }else if(islower(ch)){
                                char secCh = 97 + (97%sec);
                                fputc(secCh,fnew);
                            }
                        }else{
                            fputc(ch,fnew);
                        }
                    }
                    printf("Decrypted File is %s\n",decryptedFilename);
                }
               
            }
        }
        
        
    }while(res!='Q');
    
}