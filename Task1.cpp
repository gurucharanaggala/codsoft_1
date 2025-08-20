#include <iostream>
#include <ctime>
using namespace std;

int generateRandomNumber() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    return randomNumber;
}

void playGame(int guess, int numberToGuess) {
    while (guess != numberToGuess) {
        cin >> guess;

        if (guess > numberToGuess) {
            cout << "Too high! Try again: ";
        } else if (guess < numberToGuess) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Correct! The number was " << numberToGuess << "." << endl;
            return;
        }
    }
}

int main() {
    int numberToGuess = generateRandomNumber();

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess the number between 1 and 100: ";

    playGame(0, numberToGuess);

}
