bool isRowvalid(int grid[N][N],int row,int num){
    for(int i=0;i<N;i++){
        if(grid[row][i]==num){
            return 0;
        }
    }
    return 1;
}

bool isColvalid(int grid[N][N],int col,int num){
    for(int i=0;i<N;i++){
        if(grid[i][col]==num){
            return 0;
        }
    }
    return 1;
}

bool isBoxvalid(int grid[N][N],int row,int col,int num){
    for(int i=row;i<row+3;i++){
        for(int j=col;j<col+3;j++){
            if(grid[i][j]==num){
                return 0;
            }
        }
    }
    return 1;
}

bool isValid(int grid[N][N],int row,int col,int num){

    return isRowvalid(grid,row,num) && isColvalid(grid,col,num) && isBoxvalid(grid,row-(row%3),col-(col%3),num);
}


bool findUnassigned(int grid[N][N],int &row,int &col){
    for(row=0;row<N;row++){
        for(col=0;col<N;col++){
            if(grid[row][col]==0){
                return 1;
            }
        }
    }
    return 0;
}



bool SolveSudoku(int grid[N][N])  
{ 
    int row,col;
    if(!findUnassigned(grid,row,col)){
        return 1;
    }
    
    for(int i=1;i<=9;i++){
        if(isValid(grid,row,col,i)){
            grid[row][col] = i;
            if(SolveSudoku(grid)){
                return 1;
            }
            grid[row][col] = 0;
        }
    }
    
    return 0;
}

void printGrid (int grid[N][N]) 
{
    // Your code here 
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j]<<' ';
        }
    }
}
