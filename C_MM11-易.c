#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c ,d;
    while(scanf("%d",&a)!=EOF)
    {
        printf("NT10=%d\n",a/10);
        b=a%10;
        printf("NT5=%d\n",b/5);
        c=b%5;
        printf("NT1=%d\n",c);
    }

    return 0;
}
