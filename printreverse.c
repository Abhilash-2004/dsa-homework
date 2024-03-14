#include<stdio.h>
int reverse(int N);
main()
{

    int num;
    int rev;
    int N;
    printf("enter a number\n");
    scanf("%d",&N);
    rev=reverse(N);
    printf("revrse number is=%d",rev);

}
int reverse(int N)
{
    int rev=0;
    int digit;
    while(N!=0)
    {
        digit=N%10;
        rev=(rev*10)+digit;
        N=N/10;

    }
    return rev;
}

