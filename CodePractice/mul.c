//Multiplication of two number

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("%d X %d = %d\n",a,b,mul(a,b));

    return 0;
}

int mul(int a, int b)
{
    if (a==0 || b==0)
    {
        return 0;
    }
    else
    {
        return a*b;
    }
}
