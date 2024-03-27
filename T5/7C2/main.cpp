#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int buocRua() {
    int prob = rand() % 100;
    if (prob < 50) return 3;
    else if (prob < 80) return 1;
    else return -6;
}

int buocTho() {
    int prob = rand() % 100;
    if (prob < 20) return 0;
    else if (prob < 40) return 9;
    else if (prob < 50) return -12;
    else if (prob < 80) return 1;
    else return -2;
}

void chay(int& viTri, int (*buoc)()) {
    int b = buoc();
    viTri += b;
    if (viTri < 0) viTri = 0;
}

int main() {
    srand(time(0));
    int viTriRua = 0, viTriTho = 0;
    int turn = 0;

    cout << "Cuoc dua bat dau!" << endl;

    while (viTriRua < 70 && viTriTho < 70) {
        chay(viTriRua, buocRua);
        chay(viTriTho, buocTho);

        cout << "Luot " << ++turn << ":" << endl;
        cout << "Rua (R): " << viTriRua << endl;
        cout << "Tho (T): " << viTriTho << endl;
    }

    if (viTriRua >= 70) cout << "Rua thang cuoc!" << endl;
    else cout << "Tho thang cuoc!" << endl;

    cout << "Cuoc dua ket thuc!" << endl;

    return 0;
}
