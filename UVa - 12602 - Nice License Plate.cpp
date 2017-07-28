#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s[10];
        gets(s);
        int one=0, two=0;
        int a = (int)('A'-s[0]), b = (int) ('A'-s[1]), c = (int)('A'-s[2]);
        one = abs(a)*(26*26) + abs(b)*(26) + abs(c)*1 ;
        two = (s[4]-'0')*1000 + (s[5]-'0')*100 + (s[6]-'0')*10 + (s[7]-'0');
        //cout<<one<<' '<<two<<endl;
        if(abs(one-two)<=100) printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}
