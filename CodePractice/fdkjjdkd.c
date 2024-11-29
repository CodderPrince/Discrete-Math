#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[101];
        int n,m,x,y;
        scanf("%d %d %d %d",&n,&m,&x,&y);
        int i,res;
        int count=0;
        for(i=0; i<n; i++)
        {
            scanf(" %c",&str[i]);
            if(str[i]=='.')
            {
                count++;
            }
        }

        if(n>=m)
        {
            res = x * count;
            printf("%d\n",res);
            //break;
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
