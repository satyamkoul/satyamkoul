#include<stdio.h>

int main()
{
    int n,i,loc,el;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n+1];

    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }

     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n Enter the location where you want to insert new element : ");
    scanf("%d",&loc);

    printf("Enter the element you want to insert : ");
    scanf("%d",&el);

    for(i=(n-1);i>=(loc-1);i--)
    {
        arr[i+1]=arr[i];
    }

    arr[loc-1]=el;

     for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}
