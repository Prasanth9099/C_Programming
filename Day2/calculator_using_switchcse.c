#include <stdio.h>

int main()
{

    while(1){
            char ch;
            int a,b;
        printf("Enter the operator : ");
        scanf("%c",&ch);
        printf("enter the value of a & b: ");
        scanf("%d%d",&a,&b);
        switch(ch){
            case '+':{
                printf("%d\n",a+b);
                break;
            }
            case '-':{
                printf("%d\n",a-b);
                break;
            }
            case '*':{
                printf("%d\n",a*b);
                break;
            }
            case '/':{
                printf("%d\n",a/b);
                break;
            }
        }}

    return 0;
}
