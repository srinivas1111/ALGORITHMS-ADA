#include<stdio.h>
void ms(int[],int,int,int);
void partition(int[],int,int);

void main()
{
        int a[20],i,n;
        printf("enter n\n");
        scanf("%d",&n);
        printf("enter ele\n");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);

        partition(a,0,n-1);
        printf("sorted array is\n");
        for(i=0;i<n;i++)
                printf("%d\t",a[i]);
}

void partition(int x[],int low,int high)
{
        int mid;
        if(low<high)
        {
                mid=(low+high)/2;
                partition(x,low,mid);
                partition(x,mid+1,high);
                ms(x,low,mid,high);
        }
}
void ms(int x[],int low,int mid,int high)
{
        int m,i,k,l,t[30];
        l=low;
        i=low;
        m=mid+1;

        while((l<=mid)&&(m<=high))
        {
                if(x[l]<=x[m])
                {
                        t[i]=x[l];
                        l++;
                }
                else
                {
                        t[i]=x[m];
                        m++;
                }
                i++;
        }
        if(l>mid)
        {
                for(k=m;k<=high;k++)
                {
                        t[i]=x[k];
                        i++;
                }
        }
        else
        {
                 for(k=l;k<=mid;k++)
                {
                        t[i]=x[k];
                        i++;
                }
        }
        for(k=low;k<=high;k++)
                x[k]=t[k];
}
















