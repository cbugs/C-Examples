#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,gradient,yint;
    printf("Enter first coordinates in the form x,y: ");
    scanf("%d,%d",&x1,&y1);
    printf("Enter second coordinates in the form x,y: ");
    scanf("%d,%d",&x2,&y2);
    printf("Enter third coordinates in the form x,y: ");
    scanf("%d,%d",&x3,&y3);
    
    gradient=(y2-y1)/(x2-x1);
    yint=y1-(gradient*x1);
    if(y3==(x3*gradient)+yint)
    {
      printf("The three points lie on the same line");
       }
    else
    {
        printf("The three points are not collinear");
        }
        
    getchar();
    getchar();
    getchar();
    return 0;
}
