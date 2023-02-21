/*

you are given an array of ranges arr of size n. each element of the array contains a tuple
of three integers. the first two integers denote the starting index and ending index of the ranges,
and the third integer denotes the score you will get if you choose the range. your task is to maximise your total score by selecting
ranges such that the ranges shouldn't intersect (they can touch)

Input:
n = 5
arr = {{1,5,4}, {1,3,10}, {3,5,5}, {1,2,1}, {2,3,2}}
Output:
15
Explanation:
If we select the 2nd and 3rd ranges, the total score will be (10+5)=7.


Input:
n = 2
arr = {{1,2,10}, {1,2,1}}
Output:
10
Explanation:
You can select the 1st range, the total score will be 10.





*/

#include<bits/stdc++.h>
using namespace std;

long long maxScore(int  n, vector<vector<int>> & arr)
{
    long long dp[n+2];
    fill(dp, dp +n +2, 0L);

    vector<pair<int,int>> ranges[n+1];

    for( int i = 0; i< n; i++)
    {
        int l = arr[i][0];
        int r = arr[i][1];
        int v = arr[i][2];

        range[l].push_back({r,v});
    }

    for(int i =n ; i>=0; i --)
    {
        dp[i] = dp[i +1];
        for(pair<int,int> range : ranges[i])
            dp[i] = max(dp[i], dp[range.first] + (range.second *1LL));
    }

    return dp[0];
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(3));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <3; j++)
            cin >> arr[i][j];
    }

    cout << maxScore(n, arr)<<endl;
}