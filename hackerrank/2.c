// Expected output
// C
// Language
// Welcome To C!!

#include <stdio.h>
#include <string.h>

int main() 
{

    char c;
    char cword[18];
    char s[100];
    scanf("%c", &c);
    scanf("%s", cword);
    scanf(" %[^\n]%*c", s);

    printf("%c",c);
    printf("\n%s",cword);  
    printf("\n%s",s);
    return 0;
}