#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)

    {
        int n;
        scanf("%d",&n);
        double i, fact=1, sum=0;
        for(i=1; i<=n; i++)
        {
            fact = fact*i;
            sum = sum + i/fact;
        }
        printf("%.4lf\n",sum);
    }

    return 0;
}
