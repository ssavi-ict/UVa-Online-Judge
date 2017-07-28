// Hey GOD help me please . I am your son . Please keep me beside you and see me . Thank You .
// Its merge sort . devide & conquer process.

#include<bits/stdc++.h>

using namespace std;

long long int swaps;
int arr[500005];

void mergesort(int arr[], int p, int q, int r)
{

    int top = q-p+1;
    int bottom = r-q;
    int left[250000+5];
    int right[250000+5];
    for(int i=0; i<top; i++)
        left[i] = arr[p+i];
    for(int j=0; j<bottom; j++)
        right[j] = arr[q+j+1];
    left[top] = 999999999 + 2;
    right[bottom] = 999999999 + 2;
    int i=0, j=0;
    for(int k=p ; k<=r; k++)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i++];
        }
        else
        {
            arr[k]=right[j++];
            swaps = swaps + top - i;
        }
    }
}

void merges(int arr[], int p, int r)
{
    int q;
    if(p<r)
        {
            q = (p+r)/2;
            merges(arr,p,q);
            merges(arr,q+1,r);
            mergesort(arr,p,q,r);
        }
}

int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        swaps=0;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        merges(arr, 0,n-1);
        cout<<swaps<<endl;
    }
    return 0;
}
