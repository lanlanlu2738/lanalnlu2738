#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b, c;
    float d;
    printf("hi\n");
    while(scanf("%f %f",&a, &b)!=EOF)
    {
        c=a*b/2;
        printf("%.1f\n",c);
    }
    return 0;
}
