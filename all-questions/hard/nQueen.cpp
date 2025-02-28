#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<string> &board, int row, int col,int n){
    // for(int j = 0; j < n; j++) {
    //     if(board[row][j] == 'Q') {
    //         return false;
    //     }
    // }

    for(int i = 0; i < n; i++) {
        if(board[i][col] == 'Q') {
            return false;
        }
    }

    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if(board[i][j] == 'Q') {
            return false;
        }
    }

    for(int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if(board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void nQueens(vector<string> &board, int n, int row, vector<vector<string>> &ans){  
    if(row == n) {
        ans.push_back(board);
        return;
    }

    for(int j = 0; j < n; j++) {
        if(isSafe(board, row, j, n)) {
            board[row][j] = 'Q';
            nQueens(board, n, row+1, ans);
            board[row][j] = '.';
        }
    }
    
}

int main(){
    int n = 4;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    nQueens(board, n, 0, ans);

    for(const auto &row: ans) {
        for(const auto & c: row) {
            cout << c << endl;
        }
        cout << endl;
    }

    return 0;
}