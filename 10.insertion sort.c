#include<stdio.h>
void is(int[],int);
void main()
{
        int a[20],i,n;
        printf("enter n\n");
        scanf("%d",&n);
        printf("enter ele\n");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        is(a,n);
}
void is(int a[],int n)
{
        int i,j,temp;
        for(i=1;i<n;i++)
        {
                temp=a[i];
                for(j=i-1;j>=0&&temp<a[j];j--)
                        a[j+1]=a[j];
                a[j+1]=temp;
        }
        printf("sorted array is\n");

        for(i=0;i<n;i++)
                printf("%d\t",a[i]);

}
















