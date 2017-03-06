#include<stdio.h>
int main()
{
    int i, sum1 , sum2, a[1000], b[1000],length, j , div;
    char n[1000];
    while(1)
    {
        sum1=0;sum2=0;
        scanf("%s",n);
        length=strlen(n);
        if(length==1 && n[0]=='0') break;
        for(i=0;i<length;i=i+2)
            sum1 = sum1+n[i]-'0';
        for(j=1;j<length;j=j+2)
            sum2=sum2+n[j]-'0';
        div = sum2-sum1;
        if(div==0)
            printf("%s is a multiple of 11.\n",n);
        else if ((div%11)==0)
            printf("%s is a multiple of 11.\n",n);
        else
            printf("%s is not a multiple of 11.\n",n);

    }
    return 0;

}
