#include <iostream>
#include <vector>
using namespace std;

void printBoard(const vector<int>& positions) {
    int N = positions.size();
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (positions[i] == j) cout << "* ";
            else cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(int row, int col, const vector<int>& positions) {
    for (int i = 0; i < row; ++i) {
        if (positions[i] == col || positions[i] - i == col - row || positions[i] + i == col + row)
            return false;
    }
    return true;
}

void solveNQueens(int row, vector<int>& positions) {
    int N = positions.size();
    if (row == N) {
        printBoard(positions);
        return;
    }

    for (int col = 0; col < N; ++col) {
        if (isSafe(row, col, positions)) {
            positions[row] = col;
            solveNQueens(row + 1, positions);
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> positions(N, -1);
    solveNQueens(0, positions);
    return 0;
}
