#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char ch[100];
    char ch1[100];
    printf("Enter the characters : ");
    scanf("%s",ch);
    int len = strlen(ch);
    
    for(int i=0;i<len;i++){
        if(ch[i] >= 'A' && ch[i] <= 'Z') {
            printf("%c",ch[i]+32);
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z') {
            printf("%c",ch[i]-32);           
        }
        else if(ch[i] >= '0' && ch[i] <= '8') {
            printf("%c",ch[i]+1);           
        }
        else if(ch[i] == '9') {
            printf("0");           
        }
        else {
            printf("%c",ch[i]);
        }}
}
