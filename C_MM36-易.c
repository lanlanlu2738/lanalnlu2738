#include<stdio.h>
int main()
{
    int a,b,c,d;
    int i, j, tmp, flag =0;
    while(scanf("%d",&a)!=EOF)
    {
        if(a>=3 && a<=5)
            printf("Spring\n");
        else if (a>=6 && a<=8)
            printf("Summer\n");
        else if (a>=9 && a<=11)
            printf("Autumn\n");
        else
            printf("Winter\n");
    }
    return 0;
}
