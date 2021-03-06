#include<stdio.h>
#include<string.h>
#include<math.h>

int swaps;
int arr[1005];

void mergesort(int arr[], int p, int q, int r)
{
    int i, j, k;
    int top = q-p+1;
    int bottom = r-q;
    int left[500+5];
    int right[500+5];
    for(i=0; i<top; i++)
        left[i] = arr[p+i];
    for(j=0; j<bottom; j++)
        right[j] = arr[q+j+1];
    left[top] = 999999999;
    right[bottom] = 999999999;
    i=0, j=0;
    for(k=p ; k<=r; k++)
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
    int n, j;
    while(scanf("%d",&n)==1)
    {
        swaps=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        merges(arr, 0,n-1);
        printf("Minimum exchange operations : %d\n",swaps);
    }
    return 0;
}
