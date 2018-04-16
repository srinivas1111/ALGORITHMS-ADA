#include<stdio.h>
void qs(int [],int,int);
int main()
{
        int x[20],i,n;
        printf("enter n\n");
        scanf("%d",&n);
        printf("enter ele\n");
        for(i=0;i<n;i++)
                scanf("%d",&x[i]);
        qs(x,0,n-1);
        printf("sorted array is\n");
        for(i=0;i<n;i++)
                printf("%d\t",x[i]);
        return 0;
}
void qs(int x[],int f,int l)
{
        int pivot,i,j,temp;
        if(f<l)
        {
                pivot=f;
                i=f;
                j=l;

                while(i<j)
                {
                        while(x[i]<=x[pivot]&&i<l)
                                i++;

                        while(x[j]>x[pivot])
                                j--;

                        if(i<j)
                        {
                                temp=x[i];
                                x[i]=x[j];
                                x[j]=temp;
                        }
                }
                temp=x[pivot];
                x[pivot]=x[j];
                x[j]=temp;
                qs(x,f,j-1);
                qs(x,j+1,l);
        }
}












