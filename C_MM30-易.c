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
        flag=0;
        for(i=1;i<a;i++)
        {
            if(gcd(a,i)!=1)
            {
                flag =1;
                break;
            }
        }
        if(flag==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
