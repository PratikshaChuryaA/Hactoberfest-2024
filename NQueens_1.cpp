#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> &board)
{
    int n = board.size();
    // Check left side of the current row
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 'Q')
            return false;
    }
    // Check upper diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    // Check lower diagonal
    for (int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}

void solve(int col, vector<string> &board, vector<vector<string>> &res)
{
    if (col == board.size())
    {
        res.push_back(board);
        return;
    }
    for (int row = 0; row < board.size(); row++)
    {
        if (isSafe(row, col, board))
        {
            board[row][col] = 'Q';
            solve(col + 1, board, res);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> res;
    vector<string> board(n, string(n, '.'));
    solve(0, board, res);
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<string>> res = solveNQueens(n);
    for (auto &board : res)
    {
        for (auto &row : board)
            cout << row << endl;
        cout << endl;
    }
    return 0;
}