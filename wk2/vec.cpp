//Andrew Cotter Coding 1 Spring 2026
//Vectors, iterators, algorithms

//cl /EHsc vec.cpp
//vec

//alternatively:
//cl /EHsc vec.cpp && vec
//&& will let you do two commands in a row

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "Let's learn about Vectors!\n";

    int chapter = 0;
    cout << "What program would you like to run?\n";
    cout << "Press 1 for Vectors.\n";
    cout << "Press 2 for push_back() and pop_back().\n";
    cout << "Press 3 for algorithms.\n";

    cin >> chapter;

    if (chapter == 1) {
        // collection initializer
        vector<string> names = {"Finn",
                                "Jake",
                                "Bubblegum",
                                "Marceline",
                                "Shelby"};
        cout << "There are " << names.size() << " names in the vector.";
        cout << "Here are your names:\n";
        for (int i = 0; i < names.size(); i++) {
            cout << i + 1 << ". " << names[i] << "\n";
        }

        cout << "The first name in the vector is " << *(names.begin()) << ".\n";

        //creating our first iterator, which is a pointer to an element in a vector
        vector<string>::iterator iter;

        iter = names.begin() + 2;
        cout << "iter is pointing at " << *iter << ".\n";


    }
    if (chapter == 2) {
        cout << "Let's use push_back and pop_back().\n";

        vector<string> favMovies;

        while (favMovies.size() < 3) {
            cout << "please add a favorite movie: ";
            string input;
            cin >> input;
            //cin.ignore(INT_MAX);
            //getline(cin, input);

            favMovies.push_back(input);
        }
        
        cout << "Here are your favorite movies:\n";
        //this time use a for look with an iterator to move through the vector.
        for (vector<string>::iterator iter = favMovies.begin(); iter != favMovies.end(); iter++) {
            cout << *iter << endl;
        }

    }
    if (chapter == 3) {
        vector<string> friends;

        friends.push_back("Joey");
        friends.push_back("Monica");
        friends.push_back("Phoebe");
        friends.push_back("Ross");
        friends.push_back("Chandler");
        friends.push_back("Rachel");

        cout << "Here are your friends:\n";
        for (int i = 0; i < friends.size(); i++) {
            cout << friends[i] << ".\n";
        }

        cout << "Please choose a friend to go visit:\n";
        vector<string>::iterator chosenFriend = friends.begin();

        string input;
        cin >> input;

        //use an algorithm to find a friend
        chosenFriend = find(friends.begin(), friends.end(), input);

        if (chosenFriend != friends.end()) {
            //display the name of chsoenFriend (if we found one)
            cout << "Let's talk to " << *chosenFriend << " today!\n";
        }
        else {
            cout << "I couldn't find " << input << " in your friends.\n";
        }

        cout << "Let's give " << *chosenFriend << " a new name!\n";
        cin >> input;
        *chosenFriend = input;

        cout << "Their name is now " << *chosenFriend << ".\n";


    }
    else {
        cout << chapter << " isn't one of the options.\n";
    }

    return 0;
}