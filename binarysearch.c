#include<stdio.h>
int main()
{
    int a[]= {1,2,3,4,5,32,33,35,66,76,98,200};
    int item= 33;
    int left,right,middle;
    left=0;
    right=11;//right means total array index: array size-1= total index
    while(left<=right)
    {
        middle= (left+right)/2;/*ei jinista na kore run koresilam 
                                folafol akash vora tara*/
        if(a[middle]==item)
        {
            printf("Item found at index: %d\n",middle);
            return 0;
        }
        else if(a[middle]<item) /*if middle 33 & i want to find 66 
                                then left shift to middle(33)+1.so now left at 35*/
        {
            left= middle+1;
        }
        else //(a[middle]>item)
        {
            right= middle -1;
        }
    }
    printf("Item not found\n");
    return 0;
}
/* run time complexity= O(logN) 
jehetu ordek kore middle hosse tai
big O notation logN hobe*/ 
/*space complexity: 0(1)
constant space use kora hoyese kono
extra space use kora hoyni tai eta 
constant space hobe*/