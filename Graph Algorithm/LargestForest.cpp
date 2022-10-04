/*
Imagine the field is a 2D plane. Each cell is either water 'W' or a tree 'T'. 
A forest is a collection of connected trees. Two trees are connected if they share a side i.e. if they are adjacent to each other.

Your task is, given the information about the field, print the size of the largest forest

Size of a forest is the number of trees in it. 

If there are no forests in the field print -1.

Input format:

First line contains the size of the matrix N

The next N lines contain N characters each, either 'W' or 'T' separated by space

Read the inputs from the standard input stream

Constraints:

1<=N<=350

Output format:

Print the size of the biggest forest to the standard output stream.

Sample Input	Sample Output	Explanation
5
T T T W W
T W W T T
T W W T T
T W T T T
W W T T T	10	The forest on the top left has 6 trees but the forest on the bottom right is bigger with 10 trees. Hence the output is 10.

*/

#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<char>> & grid, int i, int j, int n)
{
    int count = 1;
    grid[i][j] = 'W';
    queue<pair<int,int>> qp;
    qp.push({i,j});
    while(!qp.empty())
    {
        int u = qp.front().first;
        int v = qp.front().second;
        qp.pop();
        int rowNumber[] = {-1,0,1,0};
        int colNumber[] = {0,1,0,-1};
        for(int k = 0; k < 4; k++)
        {
            int x = rowNumber[k] +u;
            int y = colNumber[k] + v;
            if((x >= 0 and x < n) and (y >=0 and y <n) and grid[x][y] == 'T')
            {
                grid[x][y] = 'W';
                qp.push({x,y});
                count++;
            }
        }
     }
     return count;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    for(int i = 0; i <n ;i ++)
    {
        for(int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    
    int largest_forest = INT_MIN;
    for(int i = 0 ;i < n; i ++)
    {
        for(int j =0 ; j < n; j++)
        {
            int res = bfs(grid, i, j , n);
            largest_forest = max(largest_forest, res);
        }
    }
    if(largest_forest == INT_MIN)
        cout <<-1<<endl;
    else
        cout << largest_forest<<endl;
}