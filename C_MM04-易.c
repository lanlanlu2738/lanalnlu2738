#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int a, b, c ,d;
    while(scanf("%ld %ld",&a, &b)!=EOF)
    {
        c=a+b;
        printf("%ld+%ld=%ld\n",a,b,c);
        c=a*b;
        printf("%ld*%ld=%ld\n",a,b,c);
        c=a-b;
        printf("%ld-%ld=%ld\n",a,b,c);
        c=a/b;
        d=a%b;
        if(d<0)
        {
            if(b<0)
                printf("%ld/%ld=%ld...%ld\n",a,b,c+1,d-b);
            else
                printf("%ld/%ld=%ld...%ld\n",a,b,c-1,d+b);
        }
        else
            printf("%ld/%ld=%ld...%ld\n",a,b,c,d);
    }

    return 0;
}
