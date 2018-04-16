#include<stdio.h>
void main()
{
        int n,i,a[100],key,flag=0;
        printf("enter the number of elements\n");
        scanf("%d",&n);
        printf("enter elements\n");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        printf("enter search element\n");
        scanf("%d",&key);
        for(i=0;i<n;i++)
            {
                    if(a[i]==key)
                    {

                        flag=1;
                        break;
                    }
            }
            if(flag==1)
                printf("element found at %d position",i+1);
            else
                printf("element not found\n");



}










