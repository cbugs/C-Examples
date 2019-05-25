#include<stdio.h>
int main()
{
    int numb,D1,D2,D3,D4,D5,ininumb;
    printf("Enter a five-digit number,I'll tell you its reverse and\n");
    printf("whether they are the same?:  ");
    scanf("%d",&numb);
    ininumb=numb;
    D1=numb%10;
    numb=(numb-D1)/10;
    D2=numb%10;
    numb=(numb-D2)/10;
    D3=numb%10;
    numb=(numb-D3)/10;
    D4=numb%10;
    numb=(numb-D4)/10;
    D5=numb;
    numb=((D1*10000)+(D2*1000)+(D3*100)+(D4*10)+D5);
    printf("The reverse is: %d\n",numb);
    if(numb==ininumb)
    {
                     printf("Both the reverse and the number are equal\n");
                     }
                     else
                     {
                         printf("The reverse and the number are not equal\n");
                         }
                         
    getchar();
    getchar();                     
    getchar();
    return 0;
}
