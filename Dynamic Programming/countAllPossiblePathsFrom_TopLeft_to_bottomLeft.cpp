#include<bits/stdc++.h>
using namespace std;

long long int mod = 1e9+7;

long long int numberOfPaths(int m , int n)
{
    long long int dp[m+1][n+1];
    memset(dp, -1, sizeof(dp));
    
    for( int i = 0; i <= m; i++)
    {
        for(int j = 0 ; j<=n ;j ++)
        {
            if(i == 0|| j ==0)
                dp[i][j] = 0;
            else if(i ==1 || j== 1)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i-1][j]%mod + dp[i][j-1]%mod)%mod;
        }
    }
    return dp[m][n];
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << numberOfPaths(int m,int n)<<endl;
    return 0;
}