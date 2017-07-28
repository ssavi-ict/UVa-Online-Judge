#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, test;
    scanf("%d",&test);
    while(test--)
    {
        int sq, multi, add;
        scanf("%d %d %d", &a, &b, &c);
        bool flag = false;
        for(int i=-100; i<=100; i++)
        {
            for(int j=-100; j<=100; j++)
            {
                int k = a - (i + j);
                if((i*j*k)==b && ((i*i) + (j*j) +(k*k))==c)
                {
                    if(i<j && j<k)
                    {
                        flag = true;
                        printf("%d %d %d\n", i, j, k);
                    }
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag) printf("No solution.\n");
    }
    return 0;
}
