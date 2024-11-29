#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double fact=1,sum=0,i;
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
            sum = sum + i/fact;
        }
        printf("%.4lf\n",sum);
    }

    return 0;
}
