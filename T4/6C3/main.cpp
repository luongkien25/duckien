#include <iostream>
#include <vector>
using namespace std;

void printCombinations(vector<char>& combination, int start, int N, int K) {
    if (K == 0) {
        for (char c : combination) cout << c;
        cout << endl;
        return;
    }
    for (int i = start; i <= N - K; ++i) {
        combination.push_back('a' + i);
        printCombinations(combination, i + 1, N, K - 1);
        combination.pop_back();
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<char> combination;
    printCombinations(combination, 0, N, K);
    return 0;
}
