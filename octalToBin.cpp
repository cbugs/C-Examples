#include<stdio.h>
#include<math.h>
int main()
{
    int numb,x,ans,oct,poweight,powten;
    printf("Enter the number to be converted into octal");
    scanf("%d",&numb);
    for(x=99;x>=1;x--)
    {
                      poweight=pow(8,x);
                      powten=pow(10,x);
                      ans=numb/poweight;
                      oct=(ans*powten)+oct;
                      numb=(numb-poweight)*ans;
                      }
    printf("%d",oct);
    getchar();
    getchar();
    return 0;
}
