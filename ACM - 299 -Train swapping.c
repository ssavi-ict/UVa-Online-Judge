#include<stdio.h>
int main()
{
    int t, l, a[100], count, ptr, temp ,j, i;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&l);
        if(l>=0 && l<=50)
        {
            for(i=1;i<=l;i++)
                scanf("%d",&a[i]);
            for(j=1;j<=l;j++)
            {
                ptr=1;
                while(ptr<=l-j)
                {
                    if(a[ptr]>a[ptr+1])
                    {
                        temp=a[ptr+1];
                        a[ptr+1]=a[ptr];
                        a[ptr]=temp;
                        count++;
                    }
                    ptr=ptr+1;
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",count);
        }
    }
    return 0;
}
