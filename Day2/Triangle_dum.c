
#include <stdio.h>

int main()
{
    int sd1,sd2,sd3;
    printf("Enter the side1 of triangle : ");
    scanf("%d",&sd1);
    printf("Enter the side3 of triangle : ");
    scanf("%d",&sd2);
    printf("Enter the side3 of triangle : ");
    scanf("%d",&sd3);
    
    (sd1==sd2 && sd2==sd3)?printf("Triangle 2 is possible ") :
    ((sd1 + sd2) > sd3)?printf("Triangle 1 is possible"):
    printf("Not possible ");

    return 0;
}
