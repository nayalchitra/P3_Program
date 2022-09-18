
/*
Given two integers a and b. Find the sum of two numbers without using arithmetic operators.

Example 1:

Input:
a = 5, b = 3
Output: 8
Explanation :
5 + 3 = 8
Example 2:

Input:
a = 10, b = 30
Output: 40
Explanation:
10 + 30 = 40

*/

#include<bits/stdc++.h>
using namespace std;

int sum (int a, int b)
{
    int count = a & b;
    int sum = a ^ b;

    while( count > 0)
    {
        int s = count << 1;

        count = sum & s;

        sum = sum ^ s;
    }
    return sum;
}

int main()
{
    cout << sum(5, 3) << endl;
    cout << sum(10, 30) << endl;
    cout << sum(3, 7) << endl;
    return 0;
}