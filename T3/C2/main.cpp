#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool kq = true;
    for (int i = 0, j = n- 1; i< j; i++, j--) {
        if (s[i] != s[j]) {
            kq = false;
            break;
        }
    }
    if (kq) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

