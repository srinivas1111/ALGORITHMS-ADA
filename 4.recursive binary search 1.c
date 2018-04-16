#include<stdio.h>
void main()
{
        int a[10],low,key,high,i,n,c;
        printf("enter n\n");
        scanf("%d",&n);
        printf("enter in asc order\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("enter key ele\n");
        scanf("%d",&key);
        low=0;
        high=n-1;

        c=binary(a,n,low,high,key);

        if(c==0)
        {
                printf("number not found\n");
        }
        else
        {
                printf("number found\n");
        }
        return 0;
}

int binary(int a[],int n,int l,int h,int key)
{
        int m,c=0;
        if(l<=h)
        {
                 m=(h+l)/2;
                if(key==a[m])
                {
                        c=1;
                }
                else if(key<a[m])
                {
                       return binary(a,n,l,m-1,key);
                }
                else
                {

                        return binary(a,n,m+1,h,key);
                }
        }
                else
                {
                        return c;
                }

}















