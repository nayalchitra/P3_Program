#include<bits/stdc++.h>
using namespace std;


int longSubarrWthSumDivByK(int arr[], int n, int k)
{
    unordered_map<int,int> mp;
    int local_sum = 0;
    int ans = INT_MIN;
    for(int i = 0 ; i < n; i++)
    {
        local_sum += arr[i];
        
        int r = local_sum % k;

        if(r == 0)
            ans = max(ans, i + 1);
        r += r < 0 ? k : 0;

        if(mp.find(r) != mp.end())
            ans = max(ans, i - mp[r]);
        else    
            mp[r] = i; 

    }
    if(ans == INT_MIN)
        return 0;
    return ans;
}

int main()
[
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];

    cout << longSubarrWthSumDivByK(arr, n, k);
    return 0;
]