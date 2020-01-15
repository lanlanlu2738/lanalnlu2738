#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b[8], c,d,i;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<8;i++)
        {
            b[i]=0;
        }
        if(a<0)
            a=255+1+a;
        for(i=0;i<8;i++)
        {
            b[i]=a%2;
            //printf("~~%d\n",b[i]);
            a/=2;
        }
        for(i=7;i>=0;i--)
        {
            printf("%d",b[i]);
        }
        printf("\n");
    }

    return 0;
}
