#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter the agle of the triangle in the form x,y,z: ");
    scanf("%d,%d,%d",&A,&B,&C);
    if(A+B+C==180)
    {
                  printf("The triangle is a valid one");
                  }
    else
    {
        printf("The triangle is not a valid one");
        }
        getchar();
        getchar();
        getchar();
        return 0;
        }
