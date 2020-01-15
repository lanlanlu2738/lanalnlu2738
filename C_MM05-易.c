#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a, b, c ,d;
    while(scanf("%lf",&a)!=EOF)
    {
        b=(a*a*10+0.5)/10;
        printf("%.1lf\n",b);
    }

    return 0;
}
