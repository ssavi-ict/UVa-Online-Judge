#include<stdio.h>
int main()
{
    int a[101][101], n, i, j, row, col, p, q, k, l;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
              scanf("%d",&a[i][j]);
            p=0; q=0;
        for(i=1;i<=n;i++)
        {
            row=0;
            for(j=1;j<=n;j++)
                {row=row+a[i][j];}
            if((row%2)!=0)
                {p++; k=i;}
        }
        for(i=1;i<=n;i++)
        {
            col=0;
            for(j=1;j<=n;j++)
                {col=col+a[j][i];}
            if((col%2)!=0)
               {q++; l=i;}
        }
        if(p==0 && q==0)
            printf("OK\n");
        else if (p==1 && q==1)
            printf("Change bit (%d,%d)\n",k,l);
        else
            printf("Corrupt\n");
    }
    return 0;
}
