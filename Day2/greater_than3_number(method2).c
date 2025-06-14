
#include <stdio.h>

int main()
{
    int a = 10 , b = 20 , c = 30;
    (a > b && a > c) ? printf("%d\n", a) :
    (b > c) ? printf("%d\n", b) :
    printf("%d\n", c);

    return 0;
}
