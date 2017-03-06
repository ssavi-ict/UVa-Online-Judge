#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, r, t, l, d, cx ,cy, i, j, k;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&cx,&cy,&r);
       i = (x2-x1)/10;
       j = (y2-y1)/6;
       d = (2*(cx-x1))/9;
       k = (2*(cy-y1))/6;
       l = r/2;
       if((x2-x1)%10==0 && i==j && (y2-y1)%6==0 && j==d && (2*(cx-x1))%9==0 && d==k && (2*(cy-y1))%6==0 && (r%2==0) && k==l)
          printf("YES\n");
       else
        printf("NO\n");
    }
    return 0;
}
