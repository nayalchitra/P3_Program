/*


Given the base (in units) of a right-angled isoceles traingle, find the maximum number of 2X2 squares that can fit in the triangle with given base.

Example 1:

Input: 8
Output: 6

*/

#include<bits/stdc++.h>
using namespace std;

long long int numberOfSquares(long long int base)
{
    base = base/2;
    return (base *(base - 1))/2;
}

int main()
{
    long long int base;
    cin >> base;
    cout<< numberOfSquares(base)<<endl;
}