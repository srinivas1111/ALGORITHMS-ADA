#include<stdio.h>
void main()
{
      int i,n,a[100],l[90];
      printf("enter no of elements\n");
      scanf("%d",&n);
      printf("enter ele\n");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        ss(a,n);
}

void ss(int a[],int n)
{

        int i,j,min,temp;
        for(i=0;i<n-1;i++)
        {


                min=i;

                for(j=i+1;j<n;j++)
                {


                        if(a[j]<a[min])

                                min=j;
                }

                        if(min!=i)
                        {

                                temp=a[i];
                                a[i]=a[min];
                                a[min]=temp;
                        }

        }
        printf("sorted list is\n");
        for(i=0;i<n;i++)
                printf(" %d\t", a[i]);

}


