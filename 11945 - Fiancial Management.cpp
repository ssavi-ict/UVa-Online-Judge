#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    double d, sum;
    int j=0;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        for(int i=0; i<12; i++)
        {
            scanf("%lf",&d);
            sum = sum + d;
        }
        double avg = sum/12.00;
        printf("%d $",++j);
        if(avg<=999999999999999.0 && avg>999999999999.0)
            { int a = avg/1000000000000.0; printf("%d,",a); avg = fmod(avg,1000000000000.0);}
        if(avg<=999999999999.0 && avg>999999999.0)
            { int a = avg/1000000000.0; printf("%d,",a); avg = fmod(avg,100000000.0);}
        if(avg<=999999999.0 && avg>999999.0)
            { int a = avg/1000000.0; printf("%d,",a); avg = fmod(avg,1000000.0);}
        if(avg<=999999.0 && avg>999.0)
            { int a = avg/1000.0; printf("%d,",a); avg = fmod(avg,1000.0);}

        printf("%.2lf\n",avg);
    }
    return 0;
}
