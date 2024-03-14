#include<stdio.h>
int main()
{
    int age;
    char gender;
    printf("enter age and gender \n ");
    scanf("%c%d",&gender,&age);
    if(age>60 && gender=='f')
    printf("discount available");
    else
    printf("discount not available");
    return 0;
    }
