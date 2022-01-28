#include<stdio.h>
void main()
{
 int i, n,a[n],element;
 printf("Enter size of array:");

scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the element ");
    scanf("%d",&a[i]);

}
printf("Enter the element to search");
scanf("%d",&element);
for(i=0;i<n;i++)
{
    if(a[i]==element)
        {
            printf("found");
        }
    
}
}