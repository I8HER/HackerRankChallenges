// Hash Tables Ransom Note.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void checkMagazine(vector<string> magazine, vector<string> note) {
    unordered_map<std::string, int>words;                   //Creating Hash Tables
    for (int i = 0; i < magazine.size(); i++) {
        words[magazine[i]] = words[magazine[i]] + 1;        //Inputting magazine words into the hashtables with a number
    }
   
    for (int j = 0; j < note.size(); j++) {
        if (words[note[j]] > 0) {                           //Checking if the word exist
            words[note[j]] = words[note[j]] - 1;            //Words can't be used twice
        }
        else {
            std::cout << "No";
            return;
        }
    }

    std::cout << "Yes";
}




int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
