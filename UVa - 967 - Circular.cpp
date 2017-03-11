
#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

int cplist[]={113,131,197,199,311,337,373,719,733,919,971,991,1193,1931,3119,3779,7793,7937,9311,9377,11939,19391,19937,
              37199,39119,71993,91193,93719,93911,99371,193939,199933,319993,331999,391939,393919,919393,933199,939193,
              939391,993319,999331};

int main()
{
    int a, b;
    while(scanf("%d",&a)==1)
    {
        if(a==-1)  break;
        scanf("%d",&b);
        int cnt=0;
        for(int i=0; i<42; i++)
        {
            if(cplist[i]>b) break;
            if(cplist[i]>=a && cplist[i]<=b)
                cnt++;
        }

        if(cnt==0) printf("No Circular Primes.\n");
        else if(cnt==1) printf("1 Circular Prime.\n");
        else printf("%d Circular Primes.\n",cnt);
    }
    return 0;
}
