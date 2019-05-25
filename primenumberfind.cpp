#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rank,numb=3,div=1;
    printf("Enter the n prime number, you want to find: ");
    scanf("%d",&rank);
    if(rank>0 && rank<3)
    {
              printf("%d\n",rank+1);
              }
              
    else if (rank>=3)
    {
        rank=rank-2;
        while(rank>=0)
        {
        div++;
                     if(numb==div)
                     {
                      rank--;
                      div=1;
                      numb++;
                     }
           
                     else if(numb%div==0)
                     {
                      div=1;
                      numb++;
                     }
                     
                          }
                          printf("%d\n",numb-1);
                          }
system("Pause");
return 0;
}
