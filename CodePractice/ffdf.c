#include<stdio.h>
int main()
{
    printf("Enter the array size: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("The maximum element is: %d\n",max);
    return 0;
}
