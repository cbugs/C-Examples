#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][3],i,j,k=0;
    
    for(i=0;i<=2;i++)
    {
     for(j=0;j<=2;j++)
     {
    if((j>=1 && i>=0)||(i>=1))
    {
        if(k<7)
        {
        k++;
        a[i][j]=k;
        }
        else
        {
              a[i][j]=0;
              }
        }
    else
    {
        a[i][j]=0;
        }
   
                  }
                  }      

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
if(a[i][j]==0)
printf("\t");
else
{
printf("%d\t",a[i][j]);
}
}
printf("\n\n");
}
system("pause");
return 0;
}


