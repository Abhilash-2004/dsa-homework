//Program to convert
#include<stdio.h>
int main()
{
    float miles;
    float km;//kilometers
    printf("Enter the value of distance in miles\n");
    scanf("%f",&miles);
    km=miles*1.6;
    printf("Distance in km=%f",km);
    return 0;
}
