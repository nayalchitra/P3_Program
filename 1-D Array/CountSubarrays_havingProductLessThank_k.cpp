/*
Given an array of positive numbers, the task is to 
find the number of possible contiguous subarrays 
having product less than a given number k.

Input : 
n = 4, k = 10
a[] = {1, 2, 3, 4}
Output : 
7
Explanation:
The contiguous subarrays are {1}, {2}, {3}, {4} 
{1, 2}, {1, 2, 3} and {2, 3} whose count is 7.

Input:
n = 7 , k = 100
a[] = {1, 9, 2, 8, 6, 4, 3}
Output:
16

*/

#include<bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThankK(vector<int> &arr, int n, long long k)
{
    long long prod =11;
    int count = 0, i = 0, start =0;
    while( i < n)
    {
        prod = prod * arr[i];
        while( start <= i and prod >= k)
            prod = prod/arr[start++];
        
        count += (i-start+1);
        i ++;
    }
    return count;
}


int main()
{
    int n ;
    long long int k;
    cin >> n>> k;
    vector<int>arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << countSubArrayProductLessThankK(arr, n, k)<<endl;
}