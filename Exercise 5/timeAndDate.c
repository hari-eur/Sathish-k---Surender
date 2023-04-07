#include <stdio.h>
struct Timezone
{
	int hours:8;
	int minutes:8;
    int seconds:8;
    int day:8;
	int month:8;
	int year:12;
}t;

int main()
{
   
    printf("Enter the time and date format in HH:MM:SS - DD/MM/YYYY\n");
    int hours,minutes,seconds,day,month,year;
    scanf("%d %d %d %d %d %d",&hours,&minutes,&seconds,&day,&month,&year);
    
    t.hours = hours;
    t.minutes = minutes;
    t.seconds = seconds;
    t.day = day; 
    t.month = month; 
    t.year = year;
    
    printf("\n\nTimeZone : %d:%d:%d - %d/%d/%d",t.hours,t.minutes,t.seconds,t.day,t.month,t.year);
    return 0;
}
