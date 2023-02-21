#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    
    for(int i = 1 ; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while( j >= 0 and arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n = 10;
    int arr[] = {10,9,8,7,6,5,4,3,2,1};

    insertionSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}