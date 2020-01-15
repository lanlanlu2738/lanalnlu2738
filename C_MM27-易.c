#include<stdio.h>

int main()
{
    int a,b,c;
    int i, tmp;
    while(scanf("%d %d",&a, &b)!=EOF)
    {
        if(a>b)
        {
            tmp=b;
            b=a;
            a=tmp;
        }
        if(a==b)
            printf("%d\n",a);
        else
        {
            c=0;
            for(i=a;i<=b;i++)
            {
                c+=i;
            }
            printf("%d\n",c);
        }
    }
}
