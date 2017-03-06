#include<stdio.h>
int main()
{
    long long int t, s, d, score_1, score_2;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&s,&d);
        score_1 = (s+d)/2;
        score_2 = (s-d)/2;
        if(d>s || (s-d)%2!=0)
            printf("impossible\n");
        else
            printf("%lld %lld\n",score_1,score_2);

    }
    return 0;
}
