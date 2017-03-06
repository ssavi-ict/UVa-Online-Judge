#include<stdio.h>
#include<math.h>
int main()
{
    int t,i=0;
    double time1, time2 , p, d, v, u;

    freopen("input10773.txt","r",stdin);
    freopen("output10773.txt","w",stdout);
    scanf("%d", &t);
        while(t--)
            {
                scanf("%lf %lf %lf",&d,&v,&u);
                i++;
                if((v>=u)||(v<=0)||(u<=0)||(d<=0))
                {
                    printf("Case %d: can't determine\n",i);
                }
                else
                {
                    time1 = d/(sqrt((u*u)-(v*v)));
                    time2 = d/u;
                    p=time1-time2;
                    printf("Case %d: %.3lf\n",i,p);
                }

    }
    return 0;
}
