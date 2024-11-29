#include<stdio.h>
int prime(int n,int i)
{
    if(n<=1)
    {
        return 0;
    }
    if(i*i>n)
    {
        return 1;
    }
    if(n%i == 0)
    {
        return 0;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    if(prime(n,2))
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }

    return 0;
}
