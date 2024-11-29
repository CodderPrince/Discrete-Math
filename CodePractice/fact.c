//Factorial number

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial number of %d is: %d\n",n,fact(n));

    return 0;
}

int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
