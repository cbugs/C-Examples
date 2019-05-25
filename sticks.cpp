#include<stdio.h>
int main()
{
    int player,comp,sticks=21;
    while(sticks>1)
    {
                   printf("There are %d sticks,take either 1,2,3 or 4 sticks: ",sticks);
                   scanf("%d",&player);
                   
                   if(player==1)
                   {
                   comp=4;
                   }
                   else if(player==2)
                   {
                        comp=3;
                        }
                   else if(player==3)
                   {
                        comp=2;
                        }
                   else if(player==4)
                   {
                        comp=1;
                        }
                   else
                   {
                       continue;
                        }
                   sticks=sticks-player;
                   sticks=sticks-comp;
                   printf("You took %d stick(s) and i took %d stick(s)\n\n",player,comp);
                   continue;
                   }
    printf("%d stick remain you lose",sticks);
    getchar();
    getchar();
    getchar();
}
