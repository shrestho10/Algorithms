#include <stdio.h>
#include <stdlib.h>

int main()
{
   int max,i,n,min;
   int a[50];
   scanf("%d",&n);
   for(i=0;i<n; i++)
   {
       scanf("%d",&a[i]);

   }
   max=a[0];
   for(i=1;i<n;i++){
   if(max<a[i])
   {
       max=a[i];
   }
   }

   printf("\n%d",max);
}
