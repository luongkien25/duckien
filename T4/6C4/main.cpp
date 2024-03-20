#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> hadamardMatrix(int n) {
    if (n == 0) return {{1}};
    auto H = hadamardMatrix(n - 1);
    int len = H.size() * 2;
    vector<vector<int>> matrix(len, vector<int>(len, 0));

    for (int i = 0; i < len / 2; ++i) {
        for (int j = 0; j < len / 2; ++j) {
            matrix[i][j] = H[i][j];
            matrix[i][j + len / 2] = H[i][j];
            matrix[i + len / 2][j] = H[i][j];
            matrix[i + len / 2][j + len / 2] = -H[i][j];
        }
    }
    return matrix;
}

void printHadamardMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << (val > 0 ? 'o' : '.') << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    auto matrix = hadamardMatrix(n);
    printHadamardMatrix(matrix);
    return 0;
}
