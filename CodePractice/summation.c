//summation 1 to n
#include<stdio.h>

int main()
{
    int n;
    printf(" Enter a number: ");
    scanf("%d",&n);
   printf("Sum of 1 to %d is: %d\n",n,sum(n));

   return 0;
}

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1);
    }
}
