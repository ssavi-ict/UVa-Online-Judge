#include<bits/stdc++.h>

using namespace std;

int powerof(int r, int p)
{
    if(p==0) return 1;
    else return r*powerof(r,p-1);
}

int fn(int n, int radix)
{
    int sum = 0;
    int power = 0;
    while(n!=0)
    {
        sum = sum + (n%10)*powerof(radix,power);
        n = n/10;
        power++;
    }
    return sum;
}

int digits(int n)
{
    while(n!=0)
    {
        if(n%10!=1) return true;
        n = n/10;
    }
    return false;
}

int maxdig(int n)
{
    int fin=0;
    while(n!=0)
    {
        fin = max(fin,n%10);
        n = n / 10;
    }
    return fin;
}

int main()
{
    int a, b, c, test;
    char sign1, sign2;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %c %d %c %d", &a, &sign1, &b, &sign2, &c);
        int maxbase = max(maxdig(a),max(maxdig(b), maxdig(c)));
        int base = 0;
        if(maxbase==1)
        {
            if(!digits(a) && !digits(b) && !digits(c))
            {
                int getA = fn(a,1);
                int getB = fn(b,1);
                int getC = fn(c,1);
                if(getA+getB==getC)
                {
                     printf("1\n");
                     continue;
                }
            }
        }
        for(int i=2; i<=18; i++)
        {
            int getA = fn(a,i);
            int getB = fn(b,i);
            int getC = fn(c,i);
            if(getA+getB==getC)
            {
                if(i>maxbase) { base = i; break;}
            }
        }
        printf("%d\n",base);
    }
    return 0;
}
