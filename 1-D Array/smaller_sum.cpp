/*
you are given an array arr of n integers. for each index i, you have to find the sum of all integers present in the array
with a value less than arr[i].

Input:
n = 3
arr = {1, 2, 3}
Output:
0 1 3
Explanation:
For 1, there are no elements lesser than itself.
For 2, only 1 is lesser than 2.
And for 3, 1 and 2 are lesser than 3, so the sum is 3.

Input:
n = 2
arr = {4, 4}
Output:
0 0
Explanation:
There are no smaller elements than 4.


*/

#include<bits/stdc++.h>
using namespace std;

vector<long long> smallerSum (int n, vector<int> &arr)
{
    vector<long long> prefixSum(n, 0);
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    vector<long long> ans;
    prefixSum[0] = temp[0];

    for(int i = 1 ; i < n; i++)
        prefixSum[i] = prefixSum[i-1] + temp[i];
    
    for(int i = 0; i < n; i++)
    {
        int idx = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();

        if(idx == 0)
            ans.push_back(0);
        else {
            idx--;
            ans.push_back(prefixSum[idx]);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n;i ++)
        cin >> arr[i];
    
    vector<long long> ans = smallerSum(n, arr);
    for(int i = 0 ;i <n ;i++)
    {
        if(i != n-1)
            cout << ans[i]<<" ";
        else
            cout << ans[i]<<endl;
    }
    
    return 0;
}