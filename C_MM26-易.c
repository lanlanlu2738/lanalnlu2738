#include<stdio.h>

int main()
{
    long long int a,b,c;
    int i;
    while(scanf("%lld",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            b=i*i;
            printf("%d*%d=%lld\n",i,i,b);
        }
    }
}
