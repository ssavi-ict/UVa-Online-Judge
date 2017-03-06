#include<stdio.h>
#include<math.h>
int main()
{
    int l , f;
    double vel, vol;
    while(scanf("%d %d",&l,&f)==2 && l>0 && l<=100 && f>0 && f<=10000)
    {
        if(l==0 && f==0)
        {
            break;
        }
        vel = sqrt(2*f*l);
        vol = (vel*3600)/(2*l);
        printf("%.8f %.8f\n",vel ,vol);
    }
    return 0;
}
