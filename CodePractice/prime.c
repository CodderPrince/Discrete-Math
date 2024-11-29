//Prime number

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(prime(n))
    {
        printf("%d is a prime number!\n",n);
    }
    else
    {
        printf("%d is not a prime number!\n",n);
    }

    return 0;
}

int prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    int i;
    for(i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    if(i*i>n)
    {
        return 1;
    }
}

