#include<stdio.h>



int main()
{
   int A[100],n,first,last,mid, i,data;
   scanf("%d",&n);
   int c=0;
   for(i=1;i<=n;i++)
   {
       scanf("%d",&A[i]);
   }

   scanf("%d",&data);
   first=1;
   last=n;

   while(first<=last)
   { c++;
       mid=(first+last)/2;
       if (data==A[mid])
       {
           break;
       }


       else if (data<A[mid])
       {
           last=mid-1;
       }
    else if (data>A[mid])
       {
            first=mid+1;
       }



   }


   if(first>last)
   {
       printf("\n not found");
   }
   else
   {
       printf("\n found");
        printf("\n\n Location= %d",mid);

     printf("\n\nno of matching or comparing = %d",c);
   }

}

