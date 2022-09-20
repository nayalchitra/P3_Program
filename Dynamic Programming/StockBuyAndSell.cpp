/*
The cost of stock on each day is given in an array A[] of size N. Find all the segment of days on which you buy and sell the stock so that in between those days your profit is maximum.

Note: Since there can be multiple solutions, the driver code will return 1 if your answer is correct, otherwise, it will return 0. In case there's no profit the driver code will return the string "No Profit" for a correct solution.

Input:
N = 7
A[] = {100,180,260,310,40,535,695}
Output:
1
Explanation:
One possible solution is (0 3) (4 6)
We can buy stock on day 0,
and sell it on 3rd day, which will 
give us maximum profit. Now, we buy 
stock on day 4 and sell it on day 6.

*/


#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    vector<vector<int>> ans;
    for(int i = 0 ; i < n-1; i++)
    {
        if(A[i] < A[i+1])
            ans.push_back({i,i+1});
    }
    return ans;
}

int check (vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i = 0 ;i < ans.size(); i++)
        c += A[ans[i][1]] - A[ans[i][0]];
    return (c == p) ? 1 : 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int>A(n);
    for(int i = 0 ;i < n; i++)
        cin >> A[i];
    vector<vector<int>> ans = stockBuySell(A, n);
    int p = 0;
    for(int i = 0; i < n-1; i++)
    {
        int x = A[i+1] -A[i];
        if( x > 0)
            p += x;

    }
    if(ans.size() == 0)
        cout << "No Profit";
    else
        cout<< check(ans, A, p);
    cout<<endl;

    return 0;
}