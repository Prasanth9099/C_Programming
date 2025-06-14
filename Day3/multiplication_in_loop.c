#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    for(int i=1;i<=10;i++){
        printf("%d ",i*num);
    }
    printf("\n");
    
    for(int i=num;i<=10*num;i+=num){
        printf("%d ",i);
    }
    
}
