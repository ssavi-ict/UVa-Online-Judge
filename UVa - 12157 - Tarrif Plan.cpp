#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    for(int caseno=1; caseno<=test; caseno++)
    {
        int n, m, juice=0, mile=0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&m);
            m=m+1;
            mile = mile + ((m/30)*10);
            if(m%30!=0) mile = mile + 10;
            juice = juice + ((m/60)*15) ;
            if(m%60!=0) juice = juice + 15;
            //cout<<mile<<' '<<juice<<endl;
        }
        if(mile<juice)
            printf("Case %d: Mile %d\n", caseno, mile);
        else if(mile>juice)
            printf("Case %d: Juice %d\n", caseno, juice);
        else
            printf("Case %d: Mile Juice %d\n", caseno, mile);
    }
    return 0;
}
