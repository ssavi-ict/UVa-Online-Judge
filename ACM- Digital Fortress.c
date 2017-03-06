#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t, i, j, l, len1, k, c;
    float len2;
    char a[10002], b[10002];
    scanf("%d",&t);
    getchar();
    for(j=1;j<=t;j++)
    {
        gets(a);
        l=strlen(a);
        len1=sqrt(l);
        len2=sqrt(l);
        if(len1!=len2)
            printf("INVALID");
        else
        {
            for(i=0;i<len1;i++)
            {
                for(c=i; c<l;c=c+len1)
                {
                    printf("%c",a[c]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
