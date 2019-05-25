#include<stdio.h>
int main()
{
    int time,totalWage=0,employer;
        for(employer=1;employer<=10;employer++)
        {
          printf("Enter the number of overtime by employer %d: ",employer);
          scanf("%d",&time);
          totalWage=totalWage+(time*12);
          }
          
          printf("%d",totalWage);
          getchar();
          getchar();
          return 0;
          }
