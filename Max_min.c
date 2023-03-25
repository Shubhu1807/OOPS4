#include <stdio.h>
struct value
{
    int min;
    int max;
};

struct value find(int arr[],int m)
{
    struct value minmax;
    int i=0;

    if(m==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];

    }
    for (i = 0; i < m; i++)
    {
        if (arr[i]<minmax.min)
        {
            minmax.min=arr[i];
        }
        if(arr[i]>minmax.max)
        {
            minmax.max=arr[i];
        }
    }
    
    return minmax;
        
}
int main()
{
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    struct value minmax= find(arr,n);
    printf("Minimum value in array: %d.\n",minmax.min);
    printf("Maximum value in array: %d.\n",minmax.max);

}
