//program to fint number of days required to climb a well
#include<stdio.h>
int main ()
{
    int d;//depth
    int c;//climb
    int m;//sliped
    int n;//Number of days
    printf("Enter the value of depth,climb,sliped\n");
    scanf("%d%d%d",&d,&c,&m);
    n=(d-m)/(c-m);
    printf("Number of days required to climb =%d",n);
    return 0;
}
