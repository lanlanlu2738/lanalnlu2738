#include<stdio.h>


int main()
{
    int a,b,c,d;
    int i, j, tmp, flag =0;
    while(scanf("%d",&a)!=EOF)
    {
        flag =0;
        for(i=1;i<=a;i++)
        {
            if((a%i)==0 && flag ==0)
            {
                printf("%d",i);
                flag =1;
            }
            else if((a%i)==0 && flag ==1)
                printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
