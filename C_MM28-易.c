#include<stdio.h>

int main()
{
    int a,b,c;
    int i, tmp;
    while(scanf("%d",&a)!=EOF)
    {
        if(a>=35)
            printf("35");
        for(i=70;i<=a;i+=35)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
