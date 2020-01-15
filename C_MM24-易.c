#include<stdio.h>

int main()
{
    double a,b,c;
    while(scanf("%lf %lf",&a, &b)!=EOF)
    {
        if(a<=60)
        {
            c=a*b;
            printf("%.1lf\n",c);
        }
        else if(a>60&&a<=120)
        {
            c=60*b;
            c+=(a-60)*1.33*b;
            printf("%.1lf\n",c);
        }
        else
        {
            c=60*b;
            c+=60*b*1.33;
            c+=(a-120)*b*1.66;
            printf("%.1lf\n",c);
        }
    }
}
