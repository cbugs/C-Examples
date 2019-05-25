#include<stdio.h>
int main()
{
    int R,P,C;
    printf("Enter the age pf Raj,Paul and Cedric respectively in the form x,y,z: ");
    scanf("%d,%d,%d",&R,&P,&C);
    if((R>P)&&(R>C)&&(P>C))
    {
    printf("Raj is the oldest,second is Paul and Cedric is the youngest");
    }
    else if((R>P)&&(R>C)&&(C>P))
    {
    printf("Raj is the oldest,second is Cedric and Paul is the youngest");
    }
    else if((P>R)&&(P>C)&&(C>R))
    {
    printf("Paul is the oldest,second is Cedric and Raj is the youngest");
    }
    else if((P>R)&&(P>C)&&(R>C))
    {
    printf("Paul is the oldest,second is Raj and Cedric is the youngest");
    }
     else if((C>R)&&(C>P)&&(P>R))
    {
    printf("Cedric is the oldest,second is Paul and Raj is the youngest");
    }
     else if((C>R)&&(C>P)&&(R>P))
    {
    printf("Cedric is the oldest,second is Raj and Paul is the youngest");
    }
    
    getchar();
    getchar();
    getchar();
    return 0;
}
