#include<stdio.h>
void printalphabet(char);
main()
{

    char ch=97;
    printalphabet(ch);
}
 void printalphabet(char ch)
 {
     printf("alphabet from a-z are\n");
     while(ch<=122)
     {

         printf("%c\n",ch);
         ch++;


    }
    return ;
 }
