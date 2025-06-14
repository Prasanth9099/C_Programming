#include <stdio.h>

int main()
{
    int num;
    printf("Enter the numbers to print : ");
    scanf("%d",&num);
    
    printf("FOR LOOP\n");
    for(int i=0;i<num;i++){
        printf(" %d",i);
    }
    
    printf("\nWHILE LOOP\n");
    int i=0;
    while(i<num){
        printf(" %d",i);
        i++;
    }
    
    printf("\nDO WHILE\n");
    i=0;
    do{
        printf(" %d",i);
        i++;
    }while(i<num);

} 
