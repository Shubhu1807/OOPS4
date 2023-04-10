//Reversing an array or string
#include <stdio.h>
void reverse(int arr[], int m)
{
    printf(" Reverse of the given list is: \n");
    for(int i = m-1; i>=0; i--)
    {
        printf("%d \n",arr[i]);
    }
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
    reverse(arr,n);

    return 0;
}
