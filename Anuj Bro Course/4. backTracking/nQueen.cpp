#include<iostream>
using namespace std;
#define N 20

bool isSafe(int b[N][N], int row, int col){
    
    for(int i = 0; i<N; i++){
        if(b[i][col]) return false;
        // else if (b[row] [i]) return false;
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if (b[i][j])
            return false;
    }

 
    /* Check lower diagonal on left side */
    for (int i = row, j = col; j >= 0 && i < N; i++, j--){
        if (b[i][j])
            return false;
    }


    return true;
}

bool nQueen(int b[N][N], int row, int count){
    int n = N;

    if(row == n){ 
        cout<<"Function was called "<<count<<" times"<<endl;
        return true;
    }

    for(int col = 0; col<N; col++){
        if(isSafe(b, row, col)){
            b[row][col] = 1;

            if(nQueen(b, row+1, count)){
                return true;
            }
            b[row][col] = 0;
        }
    }
    return false;
}


void display(int board[N][N]){

    for(int i =0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

main(){
    int board[N][N];

    for(int i =0; i<N; i++){
        for(int j=0; j<N; j++){
            board[i][j] = 0;
        }
    }

    nQueen(board, 0, 0);

    display(board);

}