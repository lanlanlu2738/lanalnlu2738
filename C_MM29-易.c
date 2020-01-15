#include<stdio.h>

int gcd(int i, int j)
{
    if(j==0)
        return i;
    else
        return gcd(j,i%j);
}

int main()
{
    int a,b,c;
    int i, j, tmp, flag =0;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=a-1;i>=1;i--)
        {
            flag =0;
            for(j=2;j<i;j++)
            {
                if(gcd(i,j)!=1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag!=1)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
