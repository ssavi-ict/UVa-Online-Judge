/** Jai Shree Ram **/
/** ssavi. ICT-4 CoU **/

// Tricky 0/1 Knapsack Problem. The hardest part is to determine the base cases. Recursive Solution will be easier to figure out the
// Right way to solve it. Iterative solution could be a harder one.
// As they said you will get 200 refund for 2000 usage. That means you may refuse an element to take if:

// 1) Your weight of the current state is lesser than the Max Capacity and the Max Capacity is also lesser then 1800.
// Why 1800 ?? Because it might be possible cross 2000 and you may get 200 as refund for that and hence maximize the result.

// 2) Your weight of the current state is greater than sum of Max Capacity and 200 ( as 200 is refund amount )

// 3) While choosing the last element and your weight of the current state is greater than Max Capacity and lesser than or equal to 
// 2000 . Because you will get 200 amount refund only if your total weight is greater than 2000.

#include<bits/stdc++.h>
#define DIST(x1,x2, y1, y2) sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define DIST3D(x1,x2, y1, y2, z1, z2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)) + ((z1-z2)*(z1-z2)))
#define CLR(a) a.clear()
#define VCLR(a, n) for(int i=0; i<=n+3; i++) a[i].clear()
#define SIZE(a) a.size()
#define ERASE(a, b) memset(a, b, sizeof a)
#define pb push_back
#define LL long long
#define ULL unsigned long long
#define DBG cout<<"I Am Here"<<endl
#define DBGA(a) cout<<a<<endl
#define DBGI(b,a) cout<<b<<' '<<a<<endl
#define DBGL(i,s,e,b) or(int i=s; i<=e; i++) cout<<b<<endl
#define INF 0x3f3f3f3f
#define INV 1e-6
#define SF(a) scanf("%I64d", &a)
#define PF(a) printf("%I64d\n", a)
#define sf(a) scanf("%d", &a)
#define pf(a) printf("%d\n", a)
#define pii pair<int,int>
#define PIS pair<double,string>
#define PII pair<LL,LL>
#define MAX 600005
#define CASE(i) printf("Case %d:", i);
#define PI acos(-1)
#define piis pair<int, string>
#define fast1 ios_base::sync_with_stdio(false);
#define fast2 cin.tie(0)
#define CHECK_BIT(var,pos) ((var & (1 << pos)) == (1 << pos))
#define LOOP(i, b, n) for(int i=b; i<=n; i++)
#define nl puts("")
#define popcount __builtin_popcount
#define valid(i,j,m,n) (i>=0 && i<n && j>=0 && j<m)
#define all(v) v.begin(), v.end()

using namespace std;

/** -------------------------------------------------**/
/** Header And Definitions Ends Here.               **/
/** -----------------------------------------------**/

int dx4[] = {0, 0, 1, -1}; int dy4[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, -1, 1, 1, -1, -1}; int dy8[] = {1, -1, 0, 0, 1, -1, 1, -1};
int dxH[] = {2, 2, -2, -2, 1, 1, -1, -1}; int dyH[] = {1, -1, 1, -1, 2, -2, 2, -2};
int nlmon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int lmon[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const double GRS = (1 + sqrt(5))/2;

template<typename T> T in()
{
    char ch;
    T n = 0; bool ng = false;
    while (1) { ch = getchar(); if (ch == '-') { ng = true; ch = getchar(); break;} if (ch>='0' && ch<='9') break; }
    while (1) { n = n*10 + (ch - '0'); ch = getchar();
    if (ch<'0' | ch>'9')   break;    }  return (ng?-n:n);
}


template<typename T> T power(T X, T P)
{
    T ans = (T)1;
    for(T i=1; i<=P; i++){
        ans = ans * X;
    }
    return ans;
}

template<typename T> T ABS(T A, T B)
{
    T ret = A - B;
    if(ret<0) return -ret;
    return ret;
}

const LL MOD = 1000000007;
const LL BIGMAX = power(2,63) - 1;

template<typename T> T ADD(T X, T Y, T M)
{
    if(X+Y<0)
        return (X - M) + Y;
    else if(X+Y>=M)
        return X+Y-M;
    else
        return X+Y;
}

template<typename T> T prod(T a, T b, T c) // CUSTOM PRODUCT FUNCTION FOR BIG NUMBER MULTIPLICATION
{
    T x = 0, y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = ADD(x, y, c);
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

template<typename T> T bigmod(T a, T b, T c){
    T x = (T)1, y = a%c;
    while(b > 0) {
        if(b%(T)2 == (T)1) {
            x = (x * y)%c;
        }
        y = (y * y)%c;
        b /= (T)2;
    }
    return x;
}


template <typename T> T MODINVERSE(T a){
    return bigmod(a, (T)(MOD-2), (T)MOD);
}

template<typename T> T GCD(T x, T y) {
  while ( y != 0 ) {
    T z = x % y;
    x = y;
    y = z;
  }
  return x;
}

bool isvowel(char ch)
{
    ch = toupper(ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ) return true;
    return false;
}

template<typename T>T isleap (T year)
{
    if (year%(T)400 == (T)0 || (year%(T)100 != (T)0 && year%(T)4 == (T)0)) return true;
    return false;
}

/**----------------------------------------------------------------------------**/
/** Template Ends Here. Main Function And User Defined Functions Starts Here. **/
/**--------------------------------------------------------------------------**/

int n, m;
int price[105], favor[105];
int dp[105][10005];

int solve(int pos, int wt)
{
    if(wt>m && m<1800) return -10000;
    if(m+200<wt) return -10000;
    if(pos>n){
        if(wt>m && wt<=2000) return -10000;
        return 0;
    }
    if(dp[pos][wt]!=-1) return dp[pos][wt];

    int ret1 = favor[pos] + solve(pos+1, wt+price[pos]);
    int ret2 = solve(pos+1, wt);
    dp[pos][wt] = max(ret1, ret2);
    return dp[pos][wt];
}

int main()
{
    while(scanf("%d %d", &m, &n)==2){
        ERASE(dp, -1);
        int sum = 0;
        for(int i=1; i<=n; i++){
            scanf("%d %d", price+i, favor+i);
        }

        printf("%d\n", solve(1, 0));
    }
}
