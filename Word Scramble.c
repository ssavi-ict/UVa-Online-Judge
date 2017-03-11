#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[10000], b[10000];
    int i, j, len, l, m, n, s;
    while(gets(a))
    {
        len = strlen(a);
        l=0;
        for(i=0; i<len ; i++)
        {
            if(a[i]==' ')
                b[l++] = ' ';
            else if(a[i+1]==' ' || (i+1)==len)
            {
                for(j=i;;j--)
                {
                    if(a[j]==' ' || j<0)
                    {
                        break;
                    }
                    b[l++] = a[j];
                }
            }
        }
        for(i=0; i<l; i++)
            printf("%c",b[i]);
        printf("\n");
    }
    return 0;
}
