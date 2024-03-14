//program to find time
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2;
    int y1,y2;
    int speed;
    int distance;
    int a,time;
    printf("Enter the coordinates and speed\n");
    scanf("%d%d%d%d%d",&x1,&x2,&y1,&y2,&speed);
    a=pow((x2-x1),2)+pow((y2-y1),2);
    distance=sqrt(a);
    time=distance/speed;
    printf("Total distance tarvveled =%d",distance);
    printf("Total time taken =%d",time);
    return 0;
}
