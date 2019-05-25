#include<stdio.h>
int binary(int);
int bin=0,ran=1;
int main()
{
    int numb,bincode;
    printf("Enter the integer which you want to be converted into binary");
    scanf("%d",&numb);
    bincode=binary(numb);
    printf("%d",bincode);
    getchar();
    getchar();
    return 0;
}


int binary(int x)
{
    int digit;
    while(ran<=10000000)
    {
              digit=((x%2)*ran);
              bin=bin+digit;
              ran=ran*10;
              binary(x/2);
              }
  
              return(bin);
  
}
              
              
