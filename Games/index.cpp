#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to display the game's rules
void displayRules() {
    cout << "---------------------------------------------" << endl;
    cout << "            Welcome to Number Guess!         " << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Rules:                                        " << endl;
    cout << "1. The computer will randomly pick a number. " << endl;
    cout << "2. You must guess the number within 5 tries. " << endl;
    cout << "3. Hints will be provided after each guess.  " << endl;
    cout << "---------------------------------------------" << endl;
}

int main() {
    srand(time(0)); // Initialize random seed
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int maxTries = 5;
    int userGuess;
    int tries = 0;
    bool isGuessed = false;

    displayRules();

    cout << "The secret number has been chosen between 1 and 100." << endl;
    cout << "Can you guess it in " << maxTries << " tries? Good luck!" << endl;

    while (tries < maxTries) {
        cout << "\nEnter your guess (Try " << (tries + 1) << " of " << maxTries << "): ";
        cin >> userGuess;

        if (userGuess == secretNumber) {
            isGuessed = true;
            break;
        } else if (userGuess < secretNumber) {
            cout << "Hint: The secret number is HIGHER than " << userGuess << "." << endl;
        } else {
            cout << "Hint: The secret number is LOWER than " << userGuess << "." << endl;
        }

        tries++;
    }

    if (isGuessed) {
        cout << "\nCongratulations! You guessed the secret number " << secretNumber << " in " << (tries + 1) << " tries!" << endl;
    } else {
        cout << "\nSorry, you've used all your tries. The secret number was " << secretNumber << "." << endl;
    }

    cout << "\nWould you like to play again? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        main(); // Restart the game
    } else {
        cout << "\nThank you for playing Number Guess! Goodbye!" << endl;
    }

    return 0;
}
