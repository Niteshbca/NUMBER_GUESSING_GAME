#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Generate a random number between 1 and 100
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Computer Number "<<randomNumber<<"\n";
            cout<<"Try Again \n";
        } else if (guess < randomNumber) {
            cout << "Too low! Computer Number  "<<randomNumber<<"\n";
            cout<<"Try Again \n";
        } else {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts << " attempts.\n";
        }
    } while (guess != randomNumber);

    return 0;
}
