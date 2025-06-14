#include <stdio.h>

int main(){
    int age;
    char gen;
    printf("Enter your age : ");
    scanf("%d", &age);
    getchar();

    printf("Enter your gender (m/f): ");
    scanf("%c", &gen);
    
    if(age<18 || gen== 'f')
    {
        printf("Free Ticket");
    }
    
    else{
        printf("Give money");
    }
    return 0;
}
