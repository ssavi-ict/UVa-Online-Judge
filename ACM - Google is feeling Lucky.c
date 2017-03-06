#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101],c[101],d[101],e[101],f[101],g[101],h[101],k[101],j[101];
    int l[11], i, t, max, x=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %d",a,&l[1]);
        scanf("%s %d",b,&l[2]);
        scanf("%s %d",c,&l[3]);
        scanf("%s %d",d,&l[4]);
        scanf("%s %d",e,&l[5]);
        scanf("%s %d",f,&l[6]);
        scanf("%s %d",g,&l[7]);
        scanf("%s %d",h,&l[8]);
        scanf("%s %d",k,&l[9]);
        scanf("%s %d",j,&l[10]);
        max=l[1];
        for(i=1;i<=10;i++)
        {
            if(l[i]>max)
                max=l[i];
        }
        printf("Case #%d:\n",++x);
        for(i=1;i<=10;i++)
        {
            if(l[i]==max)
            {
                if(i==1)
                    printf("%s\n",a);
                if(i==2)
                    printf("%s\n",b);
                if(i==3)
                    printf("%s\n",c);
                if(i==4)
                    printf("%s\n",d);
                if(i==5)
                    printf("%s\n",e);
                if(i==6)
                    printf("%s\n",f);
                if(i==7)
                    printf("%s\n",g);
                if(i==8)
                    printf("%s\n",h);
                if(i==9)
                    printf("%s\n",k);
                if(i==10)
                    printf("%s\n",j);
            }
        }
    }
    return 0;
}
