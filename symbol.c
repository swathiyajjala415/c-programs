include <stdio.h>
int main() 
{
    char ch;
    printf("enter the character \n");
    scanf("%c",&ch);
    int res=(ch>='#')&&(ch<='^');
    printf("%c is a symbol i.e is: %d",ch,res);
return 0;
}