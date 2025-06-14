#include <stdio.h>

int main()
{
int num,sum=0,base = 1;
 printf("Enter the number : ");
 scanf("%d",&num);
 
for(int i=0;num>0;i++){
    printf("%d \t",(num%10*base));
    sum = sum + (num%10*base);
    num = num / 10;
    base = base * 2;
}
printf("\n%d",sum);
}
