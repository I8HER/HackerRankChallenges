// New Years Chaos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
void minimumBribes(vector<int> q) {
    int Bribes = 0;
    int count = 0;
    int chaotic = 0;
    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] != i + 1) {
            if (q[i - 1] == i + 1) {
                q[i - 1] = q[i];
                q[i] = i + 1;
                Bribes++;
            }
            else if (q[i - 2] == i + 1) {
                q[i - 2] = q[i - 1];
                q[i - 1] = q[i];
                q[i] = i + 1;
                Bribes += 2;
            }
            else {
                chaotic++;
            }

        }
    }
    if (chaotic > 0) {
        std::cout << "Too chaotic" << '\n';
    }
    else {
        std::cout << Bribes << '\n';
    }

}





int main()
{
    vector<int>arr{ 2,1,5,3,4 };
    minimumBribes(arr);

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
