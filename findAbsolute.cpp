#include<stdio.h>
int main()
{
    int numb;
    printf("Enter any integer: ");
    scanf("%d",&numb);
    if(numb<0)
    {
              numb=numb*(-1);
              }
              printf("The absolute value is %d",numb);
              getchar();
              getchar();
              getchar();
              return 0;
              }
