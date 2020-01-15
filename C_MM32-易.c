#include<stdio.h>

int arm(int a,int b,int c,int d)
{
    return a-b*b*b-c*c*c-d*d*d;
}

int main()
{
    int a,b,c,d;
    int i, j, tmp, flag =0;
    while(scanf("%d",&a)!=EOF)
    {
        b=a/100;
        c=(a-b*100)/10;
        d=a-b*100-c*10;

        if(arm(a,b,c,d)==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
