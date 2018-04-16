#include<stdio.h>
void main()
{
        int n,i,a[100],key,flag;
        printf("enter the number of elements\n");
        scanf("%d",&n);
        printf("enter elements\n");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        printf("enter search element\n");
        scanf("%d",&key);

        flag=rsearch(a,0,n-1,key);

            if(flag==-1)
                printf("element not found\n");
            else
            printf("element found at %d position",flag);

}
int rsearch(int x[],int i,int n,int key)
{
        if (i>n)
                return -1;
        if(x[i]==key)
        return i+1;

                return(rsearch(x,i+1,n,key));
}









