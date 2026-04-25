#include <stdio.h>
int main() 
{
    char ch;
    printf("enter the character \n");
    scanf("%c",&ch);
    int res=!(ch=='a')||(ch=='e')|| (ch=='i')||(ch=='o')||(ch=='u');
    printf("%c is not consonant i.e is: %d",ch,res);
return 0;
}