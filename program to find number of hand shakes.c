//program to find number of hand shakes
#include<stdio.h>
int main()
{
    int n;//number of persons
    int hs;//Number of hand shakes
    printf("enter number of peoples\n");
    scanf("%d",&n);
    hs=n*(n-1)/2;
    printf("Number of hand shakes=%d",hs);
    return 0;
}
