
#include <iostream>
using namespace std;

class RockPaperScissors {
private:
    int player1Score, player2Score;

public:
    RockPaperScissors() {
        player1Score = 0;
        player2Score = 0;
    }

    void displayChoices() {
        cout << "\n1. Rock\n2. Paper\n3. Scissors\n";
    }

    int getChoice(string playerName) {
        int choice;
        cout << playerName << ", enter your choice (1-3): ";
        cin >> choice;

        while(choice < 1 || choice > 3) {
            cout << "Invalid choice! Enter again: ";
            cin >> choice;
        }
        return choice;
    }

    void showChoice(int choice) {
        if(choice == 1) cout << "Rock";
        else if(choice == 2) cout << "Paper";
        else cout << "Scissors";
    }

    void showResult(int p1, int p2) {
        cout << "Player 1 chose: ";
        showChoice(p1);
        cout << "\nPlayer 2 chose: ";
        showChoice(p2);
        cout << endl;

        if(p1 == p2) {
            cout << "It's a draw!\n";
        }
        else if((p1 == 1 && p2 == 3) ||
                (p1 == 2 && p2 == 1) ||
                (p1 == 3 && p2 == 2)) {
            cout << "Player 1 wins this round!\n";
            player1Score++;
        }
        else {
            cout << "Player 2 wins this round!\n";
            player2Score++;
        }
    }

    void playGame() {
        int rounds;
        cout << "Enter number of rounds: ";
        cin >> rounds;

        for(int i = 0; i < rounds; i++) {
            cout << "\n--- Round " << i + 1 << " ---\n";
            displayChoices();

            int p1 = getChoice("Player 1");
            cout << string(40, '\n'); // hide input (simple trick)
            displayChoices();
            int p2 = getChoice("Player 2");

            showResult(p1, p2);
        }

        cout << "\nFinal Score:\nPlayer 1: " << player1Score
             << " | Player 2: " << player2Score << endl;

        if(player1Score > player2Score)
            cout << "Player 1 wins the game!\n";
        else if(player1Score < player2Score)
            cout << "Player 2 wins the game!\n";
        else
            cout << "Game Draw!\n";
    }
};

int main() {
    RockPaperScissors game;
    game.playGame();
    return 0;
}
