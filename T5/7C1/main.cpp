#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll() {
    return rand() % 6 + 1;
}

void playGame() {
    srand(time(0));

    int scorePlayer1 = 0, scorePlayer2 = 0;
    int currentPlayer = 1;

    while (scorePlayer1 < 100 && scorePlayer2 < 100) {
        cout << "Nguoi choi " << currentPlayer << " do xuc sac" << endl;
        int dice = roll();
        cout << "Diem do duoc: " << dice << endl;

        if (currentPlayer == 1) {
            scorePlayer1 += dice;
            cout << "Tong diem nguoi choi 1: " << scorePlayer1 << endl;
        } else {
            scorePlayer2 += dice;
            cout << "Tong diem nguoi choi 2: " << scorePlayer2 << endl;
        }
        if (scorePlayer1 >= 100) {
            cout << "Nguoi choi 1 thang!" << endl;
            break;
        } else if (scorePlayer2 >= 100) {
            cout << "Nguoi choi 2 thang!" << endl;
            break;
        }
        if (scorePlayer1 < scorePlayer2) {
            currentPlayer = 1;
        } else if (scorePlayer2 < scorePlayer1) {
            currentPlayer = 2;
        }
    }
}

int main() {
    playGame();
    return 0;
}
