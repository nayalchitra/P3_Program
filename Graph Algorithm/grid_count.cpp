/*
Given a 2D grid of {0,1,2}
0: empty cell
1: cell contains a plant
2: cell where you stand initially

you can move into an adjacent cell if that adjacent cell is empty (top,bottom,left and right)

find length o shortest path to reach one of the boundary edges of the ground without staying on a plant
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
#define M 4
#define N 5

class Item{
    public:
    int row;
    int col;
    int dist;
    Item(int x,int y,int z):row(x),col(y),dist(z)
    {
    }
};

int minDistance(int Grid[M][N])
{
    Item source(0,0,0);
    bool visited[M][N]={false};
    int i,j,row,col;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(Grid[i][j]==1)
                visited[i][j]=true;
            if(Grid[i][j]==2)
            {
                source.row=i;
                source.col=j;
            }
        }
    }
    queue<Item>q;
    q.push(source);
    visited[source.row][source.col]=true;
    while(!q.empty())
    {
        Item p=q.front();
        q.pop();
        if((p.col==0)||p.row==0||p.row==M-1||p.col==N-1)
            return p.dist;
        // up 
        if(p.row-1>=0 && visited[p.row-1][p.col]==false)
        {
            visited[p.row-1][p.col]=false;
            q.push(Item(p.row-1,p.col,p.dist+1));
        }
        if(p.row+1<M && visited[p.row+1][p.col]==false)
        {
            visited[p.row+1][col]=true;
            q.push(Item(p.row+1,col,p.dist+1));
        }
        if(p.col-1>=0 && visited[p.row][p.col-1]==false)
        {
            visited[p.row][p.col-1]=true;
            q.push(Item(p.row,p.col-1,p.dist+1));
        }
        if(p.col+1<N && visited[p.row][p.col+1]==false)
        {
            visited[p.row][p.col+1]=true;
            q.push(Item(p.row,p.col+1,p.dist+1));
        }
    }
    return -1;
}

int main()
{
    //int M,N;
    //cin>>M>>N;
    int Grid[4][5]={{1,1,1,0,1},
                    {1,0,2,0,1},
                    {0,0,1,0,1},
                    {1,0,1,1,0}};
    /*for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
            cin>>Grid[i][j];
    }*/
    cout<<minDistance(Grid);
}