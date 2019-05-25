#include<stdio.h>
int main()
{
    int i,numb,fact=1;
    printf("Enter the integer and I will find the factorial");
    scanf("%d",&numb);
    
    for(i=numb;i>=1;i--)
     {
                        fact=fact*i;
                        }
    printf("%d",fact);
    getchar();
    getchar();
    return 0;
}
