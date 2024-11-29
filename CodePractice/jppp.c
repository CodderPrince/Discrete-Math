#include<stdio.h>

int prime(int num, int i)
{
    if(num<2)
    {
        return 0;
    }
    else if(i*i>num)
    {
        return 1;
    }
    else if(num % i == 0)
    {
        return 0;
    }
    else
    {
        return prime(num, i+1);
    }
}

int main()
{
    int num, i;
    scanf("%d",&num);
    if(prime(num,2))
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }

    return 0;
}
