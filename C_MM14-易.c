#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c,d;
    int i;
    while(scanf("%d",&a)!=EOF)
    {
        b=a/60;
        c=b/60;
        d=c/24;
        printf("%d days\n",d);
        printf("%d hours\n",c%24);
        printf("%d minutes\n",b%60);
        printf("%d seconds\n",a%60);
    }

    return 0;
}
