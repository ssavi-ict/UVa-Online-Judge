#include<stdio.h>
#include<math.h>
int main()
{
    long long int a, b, x, y, q, point_x, point_y, i;
    while(scanf("%lld",&q)==1)
    {
        if(q==0)
           return 0;
        scanf("%lld %lld",&a, &b);
        for(i=1;i<=q;i++)
        {
            scanf("%lld %lld",&x,&y);
            point_x= x - a;
            point_y= y - b;
            if(point_x==0 || point_y==0)
                printf("divisa\n");
            else if(point_x>0 && point_y>0)
                printf("NE\n");
            else if(point_x>0 && point_y<0)
                printf("SE\n");
            else if(point_x<0 && point_y>0)
                printf("NO\n");
            else if(point_x<0 && point_y<0)
                printf("SO\n");
        }
    }
    return 0;
}
