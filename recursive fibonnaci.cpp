#include<stdio.h>
int fibo(int);
int k=0,j=1;
int main()
{
    int rank,fibonacci;
    
    printf("Enter the number");
    scanf("%d",&rank);
    fibonacci=fibo(rank);
    return 0;
}



int fibo(int x)
{
    int i;
    if(x>=1)
    {
           
           i=k+j;
           j=k;
           k=i;
           printf("%d ",i);
           fibo(x-1); 
           }
           getchar();
           getchar();
           return 0;
           }
    
