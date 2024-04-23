#include <iostream>
#include <cstring>

using namespace std;

char* reverse(const char* a) {
    int n= strlen(a);
    char* rev= new char[n+ 1];
    for (int i= 0; i <n; ++i) {
        rev[i]= a[n- 1 - i];
    }
    rev[n] = '\0';
    return rev;
}

char* delete_char(const char* a, char c) {
    int n = strlen(a);
    char* result = new char[n + 1];
    int j = 0;
    for (int i = 0; i <n; ++i) {
        if (a[i] != c) {
            result[j++] = a[i];
        }
    }
    result[j] = '\0';
    return result;
}

char* pad_right(const char* a, int n) {
    int n1 = strlen(a);
    char* padr= new char[n + 1];
    strcpy(padr, a);
    for (int i = n1; i < n; ++i) {
        padr[i] = ' ';
    }
    padr[n] = '\0';
    return padr;
}

char* pad_left(const char* a, int n) {
    int n1 = strlen(a);
    char* padl = new char[n + 1];
    int n2 = n - n1;
    for (int i = 0; i < n2; ++i) {
        padl[i] = ' ';
    }
    strcpy(padl+ n2, a);
    padl[n] = '\0';
    return padl;
}

char* truncate(const char* a, int n) {
    int n1 = strlen(a);
    if (n1 <= n) return strdup(a);
    char* trun= new char[n + 1];
    strncpy(trun, a, n);
    trun[n] = '\0';
    return trun;
}

bool is_palindrome(const char* a) {
    int n = strlen(a);
    for (int i = 0; i < n / 2; ++i) {
        if (a[i] != a[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

char* trim_left(const char* a) {
    int n = strlen(a);
    int i = 0;
    while (i <n && isspace(a[i])) {
        ++i;
    }
    return strdup(a + i);
}

char* trim_right(const char* a) {
    int n= strlen(a);
    while (n > 0 && isspace(a[n - 1])) {
        --n;
    }
    char* trimr = new char[n + 1];
    strncpy(trimr, a, n);
    trimr[n] = '\0';
    return trimr;
}

int main() {
    const char* str = " Hello World ";
    cout << "Original: '" << str << "'" << endl;

    char* rev = reverse(str);
    cout << "Reversed: '" << rev << "'" << endl;
    delete[] rev;

    char* del = delete_char(str, 'l');
    cout << "Deleted 'l': '" << del << "'" << endl;
    delete[] del;

    char* padr = pad_right(str, 15);
    cout << "Padded Right: '" << padr << "'" << endl;
    delete[] padr;

    char* padl = pad_left(str, 15);
    cout << "Padded Left: '" << padl << "'" << endl;
    delete[] padl;

    char* trun = truncate(str, 5);
    cout << "Truncated: '" << trun << "'" << endl;
    delete[] trun;

    cout << "Is Palindrome: '" <<(is_palindrome(str) ? "Yes": "No")<<" '" << endl;

    char* triml = trim_left(str);
    cout << "Trimmed Left: '" << triml << "'" << endl;
    delete[] triml;

    char* trimr = trim_right(str);
    cout << "Trimmed Right: '" << trimr << "'" << endl;
    delete[] trimr;

    return 0;
}
