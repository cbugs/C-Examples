#include<stdio.h>
int main()
{
    int numb,positive=0,negative=0,zero=0;
    char ans;
    ans='y';
    while(ans=='y')
    {
                  printf("Enter an integer");
                  scanf("%d",&numb);
                  if (numb>0)
                  {
                             positive++;
                             }
                  else if(numb<0)
                  {
                            negative++;
                            }
                            
                  else if(numb==0)
                  {
                             zero++;
                             }
                             
    printf("Enter another number 'y' or 'n'");
    scanf("%s",&ans);
}

printf("Number of positives: %d\n",positive);
printf("Number of negatives: %d\n",negative);
printf("Number of zeros: %d\n",zero);
getchar();
getchar();
return 0;
}
                             
    
