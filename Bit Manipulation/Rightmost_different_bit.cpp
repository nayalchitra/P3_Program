/*
    Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

Example 1: 

Input: M = 11, N = 9
Output: 2
Explanation: Binary representation of the given 
numbers are: 1011 and 1001, 
2nd bit from right is different.


Example 2:

Input: M = 52, N = 4
Output: 5
Explanation: Binary representation of the given 
numbers are: 110100 and 0100, 
5th-bit from right is different.


The task is to complete the function posOfRightMostDiffBit() which takes two arguments m and n and returns
 the position of first different bits in m and n. If both m and n are the same then return -1 in this case.

*/


#include<bits/stdc++.h>
using namespace std;

int posOfRightMostDiffBit(int m , int n)
{
    int k = 1;
    if( m == n)
        return -1;
    while( m > 0 and n > 0)
    {
        if((m & 1) != (n & 1))
            return k;
        k ++;
        m = m >> 1;
        n = n >> 1;
    } 
    while( m > 0)
    {
        if( (m & 1) != 0)
            return k;
        k ++;
        m = m >> 1;
    }
    while( n >  0)
    {
        if((n & 1) != 0)
            return k;
        k ++;
        n = n >> 1;
    }
    return -1;
}

int main()
{
    int m , n;
    cin >> m >> n;
    cout << posOfRightMostDiffBit(m , n) <<endl ;
    return 0;
}