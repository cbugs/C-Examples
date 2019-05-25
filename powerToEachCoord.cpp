#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l;
    printf("Enter the numbers in the form x,y: ");
    scanf("%d,%d",&i,&j);
    k=pow(i,j);
    l=pow(j,i);
    printf("%d,%d",k,l);
    getchar();
    getchar();
    return 0;
}
