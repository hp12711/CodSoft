#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    int number, guess;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "Guess the number (between 1 and 100): " << endl;

    // Loop until the user guesses correctly
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again.\n";
        } else if (guess < number) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "🎉 Congratulations! You guessed the correct number.\n";
        }
    } while (guess != number);

    return 0;
}
