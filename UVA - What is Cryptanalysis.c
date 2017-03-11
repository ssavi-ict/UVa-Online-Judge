#include<stdio.h>
#include<string.h>
#include<ctype.h>

int arr[95];

int main()
{
    int t, i, j, k, count, len, l, max=0;
    char a[500];
    scanf("%d",&t);
    getchar();
    for(i=0; i<t; i++)
    {
        gets(a);
        for(j='A'; j<='Z'; j++)
        {
            for(l=0; a[l]!='\0'; l++)
            {
                if(toupper(a[l])==j)
                    arr[j]++;
            }
            if(arr[j]>max)
                max = arr[j];
        }
    }
    for(i=max; i>0; i--)
    {
        for(j='A'; j<='Z'; j++)
        {
            if(arr[j]==i)
                printf("%c %d\n",j,i);
        }
    }
    return 0;
}
