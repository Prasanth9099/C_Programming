#include <stdio.h>

int main()
{
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);
    
    if(((year%4==0) && (year%100!=0)) || (year%400==0)){
    printf("It is leap year.");
    }
    else{
    printf("Not a leap year");
    }
    return 0;
}
