#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y,gcf;
    printf("Enter the two numbers in the form x,y\n");
    scanf("%d,%d",&x,&y);
    gcf=hcf(x,y);
    printf("%d",gcf);
    getchar();
    getchar();
    return 0;
}

int hcf(int a,int b)
{
    int i;
    
    if(a<b)
    {
           for(i=a;i>=1;i--)
           {
                   if(a%i==0 && b%i==0)
                   {
                   return(i);
                   break;
                   }
                
           }
    }
    
    
    else
    {
                   for(i=b;i>=1;i--)
           {
                   if(a%i==0 && b%i==0)
                   {
                   return(i);
                   break;
                   }
          
           }
    }
    
}
    
    
        
                             
    
                          
    
