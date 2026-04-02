// Andrew Cotter Coding 1 Spring 2026
// Using VS Codium and its integrated terminal
// to learn about variables and logic

// compile in the Developer Command Prompt with
// 'cl /EHsc main.cpp'

#include <iostream>
using namespace std;

int main() {
    // `\n` or `backslash n`  makes a new line
    cout << "All about variables and logic!\n\n\n";

    // 40 minutes!
    
    // declare read manipulate print RAHHHHHHH!!!!!
    // declare - define what variables exist
    int playerAge = -1;             // integers are whole
    string playerName = "";      // strings are words/letters
    float playerHeight = -1.1f;     // height in meters
    bool playAgain = true;          // booleans are true/false
    bool godMode = false;

    // read - take in information
    if (playerAge == -1) {
        cout << "How old are you? ";
        cin >> playerAge;

        if (playerAge < 13) {
            cout << "This game is too grown up for you.\n";
        }
        else {
            cout << "Wow, that's old!\n";
        }
    }

    // Can you test to see if the player name is '' and if it is,
    // ask the player what their name is, and assign their response
    // to playerName
    if (playerName.empty()) {
        cout << "What is your name? ";
        cin >> playerName;

        cout << "Nice to meet you, " << playerName << "!"; 
    }
    
    // if name and age matches the programmer of this program
    // unlock god mode
    if (playerAge == 20 && playerName == "Andrew") {
        cout << "godMode unlocked :>\n";
        godMode = true;
    }
    
    if (playAgain) {
        cout << "Let's play a game!\n";

        // next class will be a guess the number game
    }

    return 0;
} // end of main