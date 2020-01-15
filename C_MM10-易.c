#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a, b, c ,d;
    while(scanf("%lf",&a)!=EOF)
    {
        b=a*9/5+32;
        printf("%.1lf\n",b);
    }

    return 0;
}
