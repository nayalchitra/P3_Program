
#include<bits/stdc++.h>
using namespace std;


int findMaDiff(int A[], int n)
{
    stack<int> stk;
    int ls[n], rs[n];
    for(int i = 0 ; i < n; i++)
    {
        while(!stk.empty() and stk.top() >= A[i])
            stk.pop();
        if(stk.empty())
            ls[i] = 0;
        else
            ls[i] = stk.top();
        stk.push(A[i]);
    }
    while(!stk.empty())
        stk.pop();
    
    for(int i = n -1; i> =0 ;i --)
    {
        while(!stk.empty() and stk.top() >= A[i])
            stk.pop();
        if(stk.empty())
            rs[i] = 0;
        else
            rs[i] = stk.top();
        stk.push(A[i]);
    }
    int max_ = INT_MIN;
    for(int i = 0; i < n; i++)
        max_ = max(max_, abs(rs[i]-ls[i]));
    return max_;

}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for(int i =0;i < n;i++)
        cin>> A[i];
    cout << findMaDiff(A, n);
}