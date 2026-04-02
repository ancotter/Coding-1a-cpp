// Andrew Cotter Coding 1 Spring 2026
// Switch, random numbers, and while loops

// your task.... create the rest of the code to say "random numbers!"
// then run the program

#include <iostream>
#include <random>     //for random numbers
#include <ctime>    //for seeding the number
using namespace std;

int main () {
    srand(time(0));     //seeds the random number generator with the current time
    cout << "Random Numbers!\n";

    cout << "Our first random number is " << rand() << "!\n";

    cout << "Here are ten random numbers:\n";

    int counter = 0;
    while(counter++ < 10) {
        cout << ( rand() % 10 ) + 1 << endl;
    }

    // guess the number game
    // the computer picks a number between 1 and 10 (INCLUSIVE!)
    int guess = 0;
    int randNum = ( rand() % 10 ) + 1;
    bool correct = false;

    cout << "\nGuess the Number (between 1 and 10, inclusive)\n";
    while (!correct) {
        correct = true;

        cout << "What's your guess? ";
        cin >> guess;

        if (guess > randNum) {
            cout << "Too High...\n";
            correct = false;
        }
        else if (guess < randNum) {
            cout << "Too Low...\n";
            correct = false;
        }
        else {
            cout << "Correct! Good Game!";
        }
    }

    return 0;
}