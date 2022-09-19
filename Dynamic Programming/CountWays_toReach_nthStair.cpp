/*
    There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

Example 1:

Input:
n = 4
Output: 5
Explanation:
You can reach 4th stair in 5 ways. 
Way 1: Climb 2 stairs at a time. 
Way 2: Climb 1 stair at a time.
Way 3: Climb 2 stairs, then 1 stair
and then 1 stair.
Way 4: Climb 1 stair, then 2 stairs
then 1 stair.
Way 5: Climb 1 stair, then 1 stair and
then 2 stairs.

*/

#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;

int fib(int dp[], int n)
{
    if(n <= 1)
        dp[n] = 1;
    else if(dp[n] != -1)
        return dp[n] % mod;
    dp[n] = fib(dp, n - 1) + fib(dp, n - 2);
    return dp[n] % mod;
}

int countWays(int n)
{
    int dp[ n + 1];
    memset(dp, -1, sizeof(dp));

    fib(dp, n);
    return dp[n]% mod;
}

int main()
{
    int n;
    cin >> n;
    cout << countWays(n);
    return 0;
}