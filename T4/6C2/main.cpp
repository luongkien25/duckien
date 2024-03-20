#include <iostream>
#include <vector>
using namespace std;

void printPermutations(vector<char>& result, int N, int K) {
    if (K == 0) {
        for (char c : result) cout << c;
        cout << endl;
        return;
    }
    if (result.size() < K) {
        for (int i = 0; i < N; ++i) {
            result.push_back('a' + i);
            printPermutations(result, N, K - 1);
            result.pop_back();
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<char> result;
    printPermutations(result, N, K);
    return 0;
}

