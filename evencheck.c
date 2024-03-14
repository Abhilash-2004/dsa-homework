#include<stdio.h>
int sumofdigits (int);
main()

{
    int N;
    int sum;
    printf("enter a number\n");
    scanf("%d",&N);
    sum=sumofdigits(N);
    printf("sum of digits=%d\n",sum);
}
 int sumofdigits (int N)
 {
     int sum =0;
     int r;
     while (N!=0)
     {
         r=N%10;
         sum+=r;
         N=N/10;
     }
     return sum;
 }
