#include<stdio.h>
void main()
{
 int i,n,a[n];
 printf("Enter size of array:");

scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the element ");
    scanf("%d",&a[i]);

}
int temp;
 for(i=0;i<(n-1);i++)
    {
        for(int j=0;j<n;i++)
            {
                if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
            }
    }
 printf("%d",a);
}



