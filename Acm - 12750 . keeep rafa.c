#include<stdio.h>

int main()
{
    int T,t,n,i,s,res,result;
    char ch;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
    scanf("%d\n",&n);
    s=0;result=0;
    for(i=0;i<n;i++)
    {
    scanf("%c",&ch);
    getchar();
    if(ch=='L'||ch=='D')
    s++;
    else
    s=0;
    if(s==3&&result==0)
    {
    result=1;
    res=i+1;
    }
    }
    if(result==0)
    printf("Case %d: Yay! Mighty Rafa persists!\n",t);
    else
    printf("Case %d: %d\n",t,res);
    }
    return 0;
}
