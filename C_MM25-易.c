#include<stdio.h>

int main()
{
    int a,b,c;
    int i;
    while(scanf("%d",&a)!=EOF)
    {
        b=0;
        for(i=0;i<=a;i+=3)
        {
            b+=i;
        }
        printf("%d\n",b);
    }
}
