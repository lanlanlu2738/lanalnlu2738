#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c,d;
    int i;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a*a+b*b<=10000)
            printf("inside\n");
        else
            printf("outside\n");
    }

    return 0;
}
