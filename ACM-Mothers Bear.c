#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[10000],c[10000];
    int i, l, p;
    while(gets(a))
    {
        p=0;
        if(strcmp(a,"DONE")==0)
            break;
        for(i=0;i<strlen(a);i++)
        {
            a[i]=tolower(a[i]);
        }
        l=0;
        for(i=0;i<=strlen(a);i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                c[l]=a[i];
                l++;
            }
        }
      for(i=0;i<l/2;i++)
       {
           if(c[i]!=c[l-i-1])
           {
               p=1;
               break;
           }
       }
       if(p==0)
          printf("You won't be eaten!\n");
       else
          printf("Uh oh..\n");
    }
    return 0;
}
