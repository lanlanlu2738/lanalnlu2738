#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    float d;
    while(scanf("%d %d",&a, &b)!=EOF)
    {
        c=a+b;
        printf("%d\n",c);
    }
    return 0;
}
