#include<stdio.h>
void Insertion(int a[],int n)
{
    int i,j,key;
    for(i=2;i<=n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>0&&a[j]<key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;

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
    Insertion(a,n);
     for(i=1;i<=n;i++)
    {
       printf("%d\n",a[i]);
    }

}
