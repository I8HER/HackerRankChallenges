// Array Left Rotation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;





vector<int> rotLeft(vector<int> a, int d) {
    for (int i = 0; i < d; i++) {
        a.push_back(a[0]);
        a.erase(a.begin());
    }

    return a;

}


int main()
{
    vector<int> result;
    vector<int> a{ 1,2,3,4,5 };
    int d = 4;
    result = rotLeft(a, d);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << '\n';
    }

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
