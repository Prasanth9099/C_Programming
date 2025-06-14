#include <stdio.h>
#include <ctype.h> 
int main()
{
  char ch;
  printf("Enter the character : ");
  scanf("%c",&ch);
  
  if(isalpha(ch)){
      printf("%c is an Alphabet",ch);
  }
  else if(isdigit(ch)){
      printf("%c is a Digit",ch);
  }
  else if(isspace(ch)){
      printf("It is space");
  }
  else{
      printf("%c is a special character",ch);
  }
  
  
}
