#include<stdio.h>
#include<string.h>
int main()
{
    char a[15];
    int i, t=0;
    while(scanf("%s",a)==1)
    {
            if(strcmp(a,"#")==0)
                break;
            else if(strcmp(a,"BONJOUR")==0)
                printf("Case %d: FRENCH\n",++t);
            else if(strcmp(a,"CIAO")==0)
                printf("Case %d: ITALIAN\n",++t);
            else if(strcmp(a,"ZDRAVSTVUJTE")==0)
                printf("Case %d: RUSSIAN\n",++t);
            else if(strcmp(a,"HALLO")==0)
                printf("Case %d: GERMAN\n",++t);
            else if(strcmp(a,"HOLA")==0)
                printf("Case %d: SPANISH\n",++t);
            else if(strcmp(a,"HELLO")==0)
                printf("Case %d: ENGLISH\n",++t);
            else
                printf("Case %d: UNKNOWN\n",++t);
    }
    return 0;
}
