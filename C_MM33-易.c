#include<stdio.h>


int main()
{
    int a,b,c,d;
    int i, j, tmp, flag =0;
    while(scanf("%d",&a)!=EOF)
    {
        flag = 0;
        for(i=2;i<=a;i++)
        {
            b=0;
            for(j=1;j<i;j++)
            {
                if((i%j)==0)
                    b+=j;
            }
            if(b==i &&flag==0)
            {
                printf("%d",i);
                flag=1;
            }
            else if(b==i && flag==1)
            {
                printf(" %d",i);
            }
        }
        printf("\n");
    }
    return 0;
}
