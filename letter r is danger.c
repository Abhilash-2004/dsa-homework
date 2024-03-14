#include<stdio.h>
int main()
{
    char letter ;
    printf("enter a letter  ");
    scanf(" %c", &letter);
    //ch=toupper(ch);
    //ch=tolower(ch);
    if(letter=='r'|| letter=='R' )
    printf("danger");
    else
    printf("safe");
    return 0 ;
    }
