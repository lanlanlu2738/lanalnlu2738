#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int a, b, c ,d;
    while(scanf("%lld",&a)!=EOF)
    {
        if(a<31)
            printf("%lld\n",b=(1<<a));
        else
            printf("Value of more than 31\n");
    }

    return 0;
}
