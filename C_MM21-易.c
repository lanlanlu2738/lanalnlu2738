#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int a, b, c,d,i;
    char e[200];
    while(scanf("%lld",&a)!=EOF)
    {
        b=1;
        for(a;a>0;a--)
        {
            b*=a;
        }
        printf("%lld\n",b);
    }

    return 0;
}
