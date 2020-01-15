#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a, b, c=5,d=10,i;
    while(scanf("%lf",&a)!=EOF)
    {
        b=a*0.9;
        if(a<=800)
        {
            printf("%.1lf\n",b);
        }
        else if(a<1500&&a>800)
        {
            b=b*0.9;
            printf("%.1lf\n",b);
        }
        else
        {
            b*=0.79;
            printf("%.1lf\n",b);
        }
    }

    return 0;
}
