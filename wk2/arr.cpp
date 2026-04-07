// Andrew Cotter
// Arrays, Loops, and Vectors

#include <iostream>
#include <string>
#include <cstdlib>  //for rand and srand
#include <ctime>    //for time
using namespace std;

int main() {
    srand(time(0));
    cout << "Array time yippee!!!\n";

    // An array in C++ has a defined size
    // and don't have a way to count how many things are in them
    cout << "Creating an array of high scores.\n";

    // declaring a new array of integers with a size of 5
    int highScores[5];

    highScores[0] = 4550;   //first score is index 1
    highScores[1] = 2215;
    highScores[4] = 11;     //last score is index 4
    
    cout << "The first score is " << highScores[0] << ".\n";

    cout << "Here are all of the high scores:\n";

    int index = 0;
    while(index < 5) {
        cout << highScores[index] << "\n";
        index++;
    }

    cout << "Let's learn about for loops to show the scores again.\n";

    // you know the deal
    for(int i = 0; i < 5; i++) {
        cout << i << ". " << highScores[i] << "\n";
    }

    cout << "\n\n\n";
    //while loop that asks for up to 10 names to add to the array
    //if they say quit then stop taking names
    //then display all names
    string Names[10];
    int nameDex = 0; //index for names because int index already exists
    bool repeat = true;
    string nameInput = "";

    while(repeat) {
        cout << "Enter a name to add to the list, or type 'quit' to stop: ";
        cin >> nameInput;
        if (nameInput == "quit") {
            repeat = false;
            cout << "\n";
        } else {
            Names[nameDex] = nameInput;
            cout << nameInput << " added to list.\n";
            nameDex++;
        }
        if (!(nameDex < 10)) {  //if nameDex isn't less than 10
            cout << "Maimum name limit reached.\n";
            repeat = false;
        }
    }
    
    cout << "\nAll Names Listed:\n\n";
    //output list
    for (int i = 0; i < nameDex; i++) {
        cout << i << ".\t" << Names[i] << "\n";
    }

    //pick a random name and save it
    //use a switch statement to pick one random response
    string name = names[rand() % index];

    cout << "Let's talk about " << name << ".\n";

    switch (rand % 4) {
        case 0:
            cout << "I love " << name << ".\n";
            break;
        case 1:
            cout << "I like " << name << ".\n";
            break;
        case 2:
            cout << "I don't like " << name << ".\n";
            break;
        case 3:
            cout << "I loathe " << name << ".\n";
            break;
    }

    return 0;
}