/*

`Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.

Example 1:

Input:
N = 6, X = 16
Arr[] = {1, 4, 45, 6, 10, 8}
Output: Yes
Explanation: Arr[3] + Arr[4] = 6 + 10 = 16

*/

#include<bits/stdc++.h>
using namespace std;


bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int i = 0, j =n-1;
    while( i < j)
    {
        if(arr[i] + arr[j] == x)
            return true;
        else if(arr[i] + arr[j] > x)
            j --;
        else
            i ++;
    }
    return false;
}


int main()
{
    int n , x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    bool ans = hasArrayTwoCandidates(arr, n, x);
    cout << ans ? "Yes" :"No";
}