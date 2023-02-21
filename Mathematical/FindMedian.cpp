/*

Given an array arr[] of N integers, calculate the median
 

Example 1:

Input: N = 5
arr[] = 90 100 78 89 67
Output: 89
Explanation: After sorting the array 
middle element is the median 

Example 2:

Input: N = 4
arr[] = 56 67 30 79
Output: 61
Explanation: In case of even number of 
elements, average of two middle elements 
is the median.

 

Your Task:
You don't need to read or print anything. Your task is to complete the function find_median() which takes the array as input parameter and returns the floor value of the median.
*/

#include<bits/stdc++.h>
using namespace std;

int find_median(vector<int>v){

    sort(v.begin(),v.end());
    int n = v.size();
    if(n%2 == 0){
        return (v[n/2]+ v[(n-1)/2])/2;
    }
    else{
        return v[n/2];
    }
}

int main(){

    int n = 5;
    vector<int>v{90,100,78,89,67};

    cout << find_median(v);
}