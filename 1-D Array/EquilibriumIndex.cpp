/*
Given an array of integers, find the equilibrium index of the array.

In case of an array, A, its equilibrium index, i, is such that

(A[0]+A[1]+……+A[i-1]) =  (A[i+1]+A[i+2]+……..+A[n-1]) where 0 < i < n-1

Exception cases:

0 should be considered as the equilibrium index, if A[1]+A[2]+…….+A[n-1] = 0
n-1 should be considered as the equilibrium index, if A[0]+A[1]+…….+A[n-2] = 0
-1 should be considered as the equilibrium index, if the condition for equilibrium index is not found to be true for any acceptable value of i.
Input format:

Read the array of elements from the standard input stream

Output format:

Print the equilibrium index to the standard output stream

Sample Input	Sample Output	Explanation
3,-4, 2, -1,-3, 2, 1	2	For the given input, the equilibrium index is 2 as sum of the elements to the left of index 2 is -1 and right of index 2 is also -1


*/

#include<bits/stdc++.h>
using namespace std;

int EquilibriumIndex(vector<int> arr)
{
    int left = 0, right = 0;
    for(int i =0 ; i < arr.size(); i++)
        right += arr[i];
    for(int i = 0; i < arr.size() ; i++) {
       
        right -= arr[i];
        if(left ==  right)
            return i;
         left += arr[i];
    }
    return -1;
}

int main() {
    string str;
     getline(cin,str);
    int number;
    stringstream ss(str);
    vector<int>arr;
    while(ss >> number)
    {
        arr. push_back(number);
        if(ss. peek())
            ss.ignore();
    }
    cout << EquilibriumIndex(arr);
    return 0;
}