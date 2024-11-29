
#include<stdio.h>
int main()
{

    int a[] ={1,3,4,5,6,8,9,11};
    int value = 91;
    int left =0, r=8,m=0;
    while(left<=r)
    {
        m = (left+r)/2;
        if(a[m] == value)
        {
            printf("Item found at index: %d\n",m);
            return 0;

        }
        else if(a[m]<=value)
        {
            left = m+1;
        }
        else

        {
            r = m-1;
        }
    }
    printf("Item not found!\n");
}
