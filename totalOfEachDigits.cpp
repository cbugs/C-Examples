#include<stdio.h>
int calculate(int x);
int main()
{
    int numb,total;
    printf("Enter a five digit nuumber\n");
    scanf("%d",&numb);
    total=calculate(numb);
    printf("The total of each digits is %d",total);
    getchar();
    getchar();
    return 0;
}

int calculate(int x)
{
    int remfi=0,i,sum=0;
    for(i=x;i!=0;'!')
    {                            
                                  remfi=i%10;
                                  sum=sum+remfi;
                                  i=(i-remfi)/10;
                                  }
                                  return(sum);
                                  }
