#include<stdio.h>
void Merge(int a[],int p,int q,int r)
{
    int t[100],i,j,k,b;
    i=p;j=q+1;k=p;
    while(i<=q&&j<=r)
    {
        if(a[i]<=a[j])
        {
            t[k]=a[i];
            i++;

        }
       else
        {
            t[k]=a[j];
            j++;

        }
        k++;
    }
        if(i>q)
        {
            for(b=j;b<=r;b++)
            {
                t[k]=a[b];
                k++;
            }
        }
       else
        {
            for(b=i;b<=q;b++)
            {
                t[k]=a[b];
                k++;
            }
        }

    for(i=p;i<=r;i++)
    {
        a[i]=t[i];
    }
}
void MergeSort(int a[],int p,int r)
{ int q;
    if(p<r)
    {
        q=(p+r)/2;
        MergeSort(a,p,q);
        MergeSort(a,q+1,r);
        Merge(a,p,q,r);
    }
}

int main()
{   int i;
    int a[100],n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d",&a[i]);
    }
   MergeSort(a,1,n);
     for(i=1;i<=n;i++)
    {
       printf("%d\n",a[i]);
    }

}
