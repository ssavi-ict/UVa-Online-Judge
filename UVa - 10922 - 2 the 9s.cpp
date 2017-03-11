#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[1002];
    while(scanf("%s",s))
    {
        int sum = 0, degree=0;
        int sz = strlen(s);
        if(s[0]=='0' && sz==1)  break;
        for(int i=0; i<sz; i++)
            sum = sum + (s[i]-'0');
        //cout<<sum<<endl;
        if(sum%9==0)
        {
            while(sum!=0)
            {
               int tot = 0;
               if(sum>9 && sum%9==0) degree++;
               else if(sum==9) { degree++; sum=0; }
               while(sum!=0)
               {
                   tot = tot + sum%10;
                   sum = sum / 10;
               }
               sum = tot;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", s, degree);
        }
        else
            printf("%s is not a multiple of 9.\n",s);
    }
    return 0;
}
