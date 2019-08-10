#include<stdio.h>
#include<stdlib.h>
int main()
{
   int x,p,totalamount=0;
   scanf("%d%d",&x,&p);
   p=100-p;
   while(x>0)
   {
       totalamount=totalamount+x;
       x=(p*x)/100;
   }
   printf("%d",totalamount);
   return 0;
}
