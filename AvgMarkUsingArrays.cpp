#include<stdio.h>
int main()
{
    float sum=0,avg;
    int i;
    int mark[5];
    
    for(i=0;i<=4;i++)
    {
                      printf("Enter marks");
                      scanf("%d", &mark[i]);
                          sum=sum+mark[i];
                      }
                      

    
    avg=sum/5;
    printf("Average marks = %f\n",avg);
    getchar();
    getchar();
    return 0;
}
