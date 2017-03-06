#include<stdio.h>
#include<string.h>
int main()
{
    char a[30], b[30];
    int i, j, add1,add2, val, dig;
    double result, sum2,sum1;
    while(gets(a))
    {
        gets(b);
        add1=0;  sum1=0; sum2=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>='A' && a[i]<='Z')
                 {val = a[i] - 64;}
            else if(a[i]>='a' && a[i]<='z')
                 {val = a[i] - 96;}
            else
                {val=0;}
            add1 = add1+val;
        }
        while(add1!=0)
        {
            sum1=0;
            while(add1!=0)
            {
                dig = add1%10;
                add1=add1/10;
                sum1 = sum1+dig;
            }

          if(sum1>9)
            add1=sum1;
        }
        add2=0;
        for(i=0;i<strlen(b);i++)
        {
            if(b[i]>='A' && b[i]<='Z')
                 {val = b[i] - 64;}
            else if(b[i]>='a' && b[i]<='z')
                 {val = b[i] - 96;}
            else
                {val=0;}
            add2 = add2+val;
        }

        while(add2!=0)
        {
            sum2=0;
            while(add2!=0)
            {
                dig = add2%10;
                add2=add2/10;
                sum2 = sum2+dig;
            }

          if(sum2>9)
            add2=sum2;
        }
        if(sum1>sum2)
            result = (sum2*100)/sum1;
        else
            result = (sum1*100)/sum2;
        printf("%0.2lf %%\n",result);
    }
    return 0;
}
