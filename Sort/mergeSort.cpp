#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    
}

void mergeSort(int arr[], int l, int r)
{
    if(l < r){
        int mid = (l+r)/2;
        mergeSort(arr, l , mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid, r);
    }
}

int main()
{
    int n = 10;
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    
    mergeSort(arr, 0,n);
    for(int i = 0 ; i < n; i++)
        cout << arr[i]<<" ";
}