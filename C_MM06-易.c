#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a, b, c ,d;
    while(scanf("%lf",&a)!=EOF)
    {
        b=(a*1.6*10)/10;
        printf("%.1lf\n",b);
    }

    return 0;
}
