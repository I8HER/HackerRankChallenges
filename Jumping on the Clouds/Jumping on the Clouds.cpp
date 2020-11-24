// Jumping on the Clouds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int jumpingOnClouds(vector<int> c) {
    int result = 0;
    for (int i = 0; i <c.size()-1; i++) {
        cout << "i is " << i << '\n';
            if (c[i] == 0 && c[i + 1] == 0 && c[i + 2] == 0 && i + 2 < c.size()) {
                result += 1;
                    i += 1;
                cout << "0 0 0 +1 " << '\n';
            }
            else if (c[i] == 0 && c[i + 1] == 1 && c[i + 2] == 0 && i + 2 < c.size()) {
                result += 1;
                    i += 1;
                cout << "0 1 0 +1 " << '\n';
            }
           else if (c[i + 1] == 0&&i+1<c.size()) {
                result += 1;
                cout << "0 +1 " << '\n';
            }
           else {
                break;
            }
        }

    return result;
}





int main()
{
    int result = 0;
    vector<int>c = { 0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,1,0,0,0,0,1,0,0,1,0,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,0,0,1,0,0,0 };
    result=jumpingOnClouds(c);
    cout << result;
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
