#include<stdio.h>

int main()
{
    int a,b,c;
    int i, tmp;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
            printf("Origin\n");
        else if(a==0)
            printf("y-axis\n");
        else if(b==0)
            printf("x-axis\n");
        else if(a>0&&b>0)
            printf("1st Quadrant\n");
        else if(a<0&&b>0)
            printf("2nd Quadrant\n");
        else if(a<0&&b<0)
            printf("3rd Quadrant\n");
        else if(a>0&&b<0)
            printf("4th Quadrant\n");
    }
    return 0;
}
