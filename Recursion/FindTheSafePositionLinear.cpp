/*

There are n people standing in a circle (numbered clockwise 1 to n) waiting to be executed. The counting begins at point 1 in the circle and proceeds around the circle in a fixed direction (clockwise). In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom.
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.

Example 1:

Input:
n = 2, k = 1
Output:
2
Explanation:
Here, n = 2 and k = 1, then safe position is
2 as the person at 1st position will be killed.
Example 2:

Input:
n = 4, k = 2
Output:
1
Explanation:
The safe position is 1.

*/
#include<bits/stdc++.h>
using namespace std;

int safePosition(int n, int k)
{
    int safe_pos = 1;
    for(int i =1; i<= n; i++)
        safe_pos = (safe_pos + k - 1)%i + 1;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << safePosition(n, k)<<endl;
    return 0;
}