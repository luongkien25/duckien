#include <iostream>
using namespace std;

bool kq(int n) {
    int reversed = 0;
    int original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == original;
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int A, B;
        cin >> A >> B;
        int count = 0;
        for (int n = A; n <= B; n++) {
            if (kq(n)) {
                count++;
            }
        }
        cout << count << endl;
    return 0;
    }
}

