#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates in the form x,y");
    scanf("%d,%d",&x,&y);
    if((x==0) && (y!=0))
    {
              printf("It lies on the y-axis");
              }
    else if((x!=0)&&(y==0))
    {
                      printf("It lies on the x-axis");
                      }
    else if((x==0)&&(y==0))
    {
                      printf("It lies on the origin");
                      }
    else
    {
        printf("It lies on any axis");
        }
    
    getchar();
    getchar();
    getchar();
    return 0;
}
    
