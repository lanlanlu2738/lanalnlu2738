#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c,d;
    int i;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
    {
        a=a*60+b;
        c=c*60+d;
        a=c-a;
        if(a<=120)
        {
            a=a/30;
            printf("%d\n",a*30);
        }
        else if(a>120&&a<=240)
        {
            a=a-120;
            a=a/30;
            printf("%d\n",a*40+120);
        }
        else
        {
            a=a-240;
            a=a/30;
            printf("%d\n",a*60+120+160);
        }
    }

    return 0;
}
