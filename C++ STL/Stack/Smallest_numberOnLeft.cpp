/*
Given an array a of integers of length n, find the nearest smaller number for every element such that the smaller element is on left side.If no small element present on the left print -1.

Example 1:

Input: n = 3
a = {1, 6, 2}
Output: -1 1 1
Explaination: There is no number at the 
left of 1. Smaller number than 6 and 2 is 1.
Example 2:

Input: n = 6
a = {1, 5, 0, 3, 4, 5}
Output: -1 1 -1 0 3 4
Explaination: Upto 3 it is easy to see 
the smaller numbers. But for 4 the smaller 
numbers are 1, 0 and 3. But among them 3 
is closest. Similary for 5 it is 4.

*/

#include<bits/stdc++.h>
using namespace std;


vector<int> leftSmaller(int n, int a[])
{
    vector<int> ans;
    stack<int> stk;

    for(int i = 0; i < n; i++)
    {
        while(!stk.empty() and stk.top() >= a[i])
            stk.pop();
        if(stk.empty())
            ans.push_back(-1);
        else
            ans.push_back(stk.top());
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ;i < n; i++)
        cin>> a[i];
    vector<int> ans = leftSmaller(n ,a);
    for(int i =0 ; i < n; i++)
        cout<< ans[i] <<" ";
    cout<<endl;
    return 0;

}
