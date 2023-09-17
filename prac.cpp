
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct cell{ 
    int row;
    int col;
    int distance;
};
bool isValidCell(int row, int col){
    return(row>=0&& row<8 && col>= 0 && col<8);
}
int bfs(int startX, int startY, int endX, int endY){
    int dx[]={-2,-1,1,2,-2,-1,1,2};
    int dy[]={-1,-2,1,2,-2,-1,2,1};
    vector<vector<bool>> visited(8, vector<bool>(8,false));
    queue<cell>bfsQueue;
    cell startCell={startX,startY,0};
    bfsQueue.push(startCell);
    visited[startX][startY]=true;
    while(!bfsQueue.empty()){
        cell currentCell=bfsQueue.front();
        bfsQueue.pop();
        if(currentCell.row== endX && currentCell.col==endY){
            return currentCell.distance;
        }
        for(int i=0;i<8; i++){
            int nextRow=currentCell.row+dx[i];
            int nextCol=currentCell.col+dy[i];
            if(isValidCell(nextRow, nextCol)&& !visited[nextRow][nextCol]){ 
            cell nextCell ={nextRow, nextCol,currentCell.distance+1};
            bfsQueue.push(nextCell);
            visited[nextRow][nextCol]=true;
        }
    }
}
return -1;
}
int main(){
    int startX, startY;
    int endX, endY;
    cout<<"Enter the starting position: ";
    cin>>startX>>startY;
    cout<<"Enter the destination: ";
    cin>>endX>>endY;
    int shortestPath=bfs(startX,startY,endX,endY);
    if(shortestPath!=-1){
        cout<<"Shotrtest path: "<<shortestPath<<endl;
    }
        else{
            cout<<"No destination"<<endl;
        }
    }
