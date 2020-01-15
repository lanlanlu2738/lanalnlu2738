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
        b=0;
        for(i=1;i<=a;i++)
        {
            if((i%6)==0&&(i%12)!=0)
            {
                b+=i;
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
