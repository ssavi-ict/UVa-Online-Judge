#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000], b[100000];
    int i, t, j=0, s, p, k;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(a);
        gets(b);
        s=0; p=0; k=0;
        if(strcmp(a,b)==0)
            printf("Case %d: Yes\n",++j);
        else
        {
            for(i=0;i<strlen(a);i++)
            {
                if((a[i]>='A' && a[i]=='Z') || (a[i]>='a' && a[i]<='z'))
                {
                    if(b[k]!=a[i])
                    {
                        p++;
                    }
                    k++;
                }
                if(a[i]==' ')
                    s++;
            }
            if((p!=0 && s==0) || (p!=0 && s!=0))
                printf("Case %d: Wrong Answer\n",++j);
            else if((p==0 && s!=0))
                printf("Case %d: Output Format Error\n",++j);
        }
    }
    return 0;
}
