#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter the value of number 1 : ");
    scanf("%d",&num1);
    
    printf("Enter the value of number 2 : ");
    scanf("%d",&num2);
    
    printf("Enter the value of number 3 : ");
    scanf("%d",&num3);
    
    if((num1 > num2) && (num1 > num3)){
        printf("%d is greater",num1);
    }
    else if((num2 > num1) && (num2 > num3)){
        printf("%d is greater",num2);
    }
    else if((num3 > num1) && (num3 > num2)){
        printf("%d is greater",num3);
    }
    else{
        printf("All are Equal");
    }
}
