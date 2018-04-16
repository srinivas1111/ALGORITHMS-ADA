#include<stdio.h>
int search (int a[],int,int);
int main()
{
        int i,a[100],n,item,pos;
        printf("enter size\n");
        scanf("%d",&n);
        printf("enter elements\n");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        printf("enter item to search\n");
        scanf("%d",&item);


        pos=search(a,n,item);

        if(pos!=-1)
                printf("element %d  found at %d position\n",item,pos+1);
        else
                printf("element not found at any position\n");

                return 0;
}

int search(int a[],int n,int item)
{
        int mid;
        int index=-1;
        int bottom=0,top=n-1;
        while(bottom<top)
        {
                mid=bottom + (( (top-bottom)* (item - a[bottom])) / (a[top]-a[bottom]));

                 if(item==a[mid])
                 {
                       index=mid;
                       break;
                 }


                if (item<a[mid])
                        top=mid-1;

                else
                        bottom=mid+1;
        }
       return index;
}

