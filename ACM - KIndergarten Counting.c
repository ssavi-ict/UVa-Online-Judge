#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i, count;
    while(1)
    {
       gets(a);count=0;
       for(i=0;i<strlen(a);i++)
       {
            if(((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122)) && (a[i+1]<65 || a[i+1]>90) && (a[i+1]<97 || a[i+1]>122))
            {
                count++;
            }
       }
        printf("%d\n",count);
    }
    return 0;
}
