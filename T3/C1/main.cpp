#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool seen[10001] = {false};
    bool kq = false;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (seen[x]) {
            kq = true;
            break;
        }
        seen[x] = true;
    }
    if (kq) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

