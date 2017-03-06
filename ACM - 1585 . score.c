#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int t, i, count , sum, length,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%s",a);
        length = strlen(a);
        count =0 ; sum=0;
        if(length>=0 && length<=80)
        {
            for(i=0;i<length;i++)
            {
                if(a[i]=='O' || a[i]=='o')
                {
                    count++;
                }
                if(a[i]== 'X' || a[i]=='x')
                {
                    count =0;
                }
                sum = sum +count;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
