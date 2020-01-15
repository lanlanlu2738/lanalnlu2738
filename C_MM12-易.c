#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c,d;
    int i;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0; ; i++)
        {
            if(23.8*i>a*100)
            {
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}
