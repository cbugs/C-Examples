#include<stdio.h>
#include<math.h>
int main()
{
    int centrex,centrey,radius,x1,y1;
    printf("Enter centre coordinates of the circle in the form x,y");
    scanf("%d,%d",&centrex,&centrey);
    printf("Enter the radius of the circle");
    scanf("%d",&radius);
    printf("Enter the point to find where it lies in relation to the circle");
    scanf("%d,%d",&x1,&y1);
    
    if((sqrt(pow(centrex-x1,2)+pow(centrey-y1,2))<radius))
    {
      printf("The point lies in the circle");
      }
    else if((sqrt(pow(centrex-x1,2)+pow(centrey-y1,2))<radius))
    {
         printf("The point lies on the circle");
         }
    else 
    {
         printf("It lies outside the circle");
         }
getchar();
getchar();
getchar();
return 0;
}
