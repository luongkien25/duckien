#include <iostream>
using namespace std;
bool is_valid(int i, int j, int m, int n) {
    return i >= 0 && i < m && j >= 0 && j < n;
}
int count_mines(char grid[10][10], int i, int j,int m,int n){
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int count = 0;
    for (int k = 0; k < 8; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        if (is_valid(x, y, m, n) && grid[x][y] == '*') {
            count++;
        }
    }
    return count;
}

int main() {
    int m, n;
    cin >> m >> n;
    char grid[10][10];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '*') {
                cout << "* ";
            } else {
                int mines = count_mines(grid, i, j, m, n);
                cout << mines << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

