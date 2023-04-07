#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student_Details{
    char name[20];
    char mail[20];
    char mobileNumber[10];
    float percentage;
};

struct Department{
    char deptName[10];
    struct Student_Details studentData[10];
    float totalAverage;
};

int main()
{
    int inputs;
    printf("Number of Inputs: ");
    scanf("%d", &inputs);
    
    char name[20], mail[20], mobileNumber[10], deptName[10];
    float percentage;
    
    int noOfDepts = 1, noOfStudents = 1;
    char initialDept[10];
    
    struct Department deptData[10];
    
    int arr[10],intial = 0;
    
    for(int i=0; i<inputs;i++){
        scanf("%s %s %s %f %s",name,mail,mobileNumber,&percentage,deptName);
       
        if(initialDept[0] == '\0'){
            strcpy(deptData[0].deptName , deptName);
            strcpy(deptData[0].studentData[0].name,name);
            strcpy(deptData[0].studentData[0].mail,mail);
            strcpy(deptData[0].studentData[0].mobileNumber,mobileNumber);
            deptData[0].studentData[0].percentage = percentage;
            strcpy(initialDept,deptName);
            
        }else{
            if( strcmp(initialDept,deptName) == 0){
                noOfStudents++;  
                strcpy(deptData[noOfDepts-1].deptName,deptName);
                strcpy(deptData[noOfDepts-1].studentData[noOfStudents-1].name,name);
                strcpy(deptData[noOfDepts-1].studentData[noOfStudents-1].mail,mail);
                strcpy(deptData[noOfDepts-1].studentData[noOfStudents-1].mobileNumber,mobileNumber);
                deptData[noOfDepts-1].studentData[noOfStudents-1].percentage = percentage;
                strcpy(initialDept,deptName);
                arr[intial] = noOfStudents;
            }else{
                // printf("%s changed to %s\n",initialDept,deptName);
                arr[intial++] = noOfStudents;
                noOfDepts++;
                noOfStudents = 1;
                strcpy(deptData[noOfDepts-1].deptName,deptName);
                strcpy(deptData[noOfDepts-1].studentData[noOfStudents-1].name,name);
                strcpy(deptData[noOfDepts-1].studentData[noOfStudents-1].mail,mail);
                strcpy(deptData[noOfDepts-1].studentData[noOfStudents-1].mobileNumber,mobileNumber);
                deptData[noOfDepts-1].studentData[noOfStudents-1].percentage = percentage;
                strcpy(initialDept,deptName);
               
            }
        }
        if(i == inputs-1){
            arr[intial++] = noOfStudents;
        }
        // printf("noOfStudents : %d \n",noOfStudents);
    }
    
    printf("\n");
    
    float sum = 0,c=0;
    printf("Number of branches: %d\n",noOfDepts);
    printf("Average percentage per Department:\n");
    for(int m = 0; m<noOfDepts;m++){
        printf("%s - ",deptData[m].deptName);
        for(int k=0; k<arr[m]; k++){
            sum+=deptData[m].studentData[k].percentage;
            c++;
        }
        printf("%.f",sum/c);
        printf("%%\n");
        sum=0,c=0;
    }
    
}





















