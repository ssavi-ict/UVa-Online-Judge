#include<stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int t, b_dd, b_mm, b_yy, c_dd, c_mm, c_yy, b_sum, i, c_sum, result, year;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("\n%lld /%lld /%lld\n%lld /%lld /%lld", &c_dd, &c_mm, &c_yy, &b_dd, &b_mm, &b_yy);
        b_sum = b_dd + (b_mm * 30) + (b_yy*365);
        c_sum = c_dd + (c_mm * 30) + (c_yy*365);
        result = c_sum - b_sum;
        year=result/365;
        if(result<0)
            printf("Case #%lld: Invalid birth date\n",i);
        else if(year>130)
            printf("Case #%lld: Check birth date\n",i);
        else if(year>=0 && year<=130)
            printf("Case #%lld: %lld\n",i,year);
    }
    return 0;
}
