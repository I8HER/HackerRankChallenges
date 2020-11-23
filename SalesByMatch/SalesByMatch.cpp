// SalesByMatch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Vector>
using namespace std;
int sockMerchant(int n, vector<int> ar) {
    int result = 0;
    vector<int> temp;
    for (int i = 0; i < ar.size(); i++) {
        for (int j = i + 1; j < ar.size(); j++) {
            temp.push_back(ar[i]);
            temp.push_back(ar[j]);
            if (temp[0] == temp[1]) {
                std::cout << temp[0] << " " << temp[1] << '\n';
                result += 1;
                temp.clear();
                ar.erase(ar.begin() + j);
                break;
            }
            else {
                temp.clear();
            }
        }
    }
    return result;
}

int main()
{
    int n = 9;
    vector<int>ar = { 10, 20, 20, 10, 10, 30, 50, 10, 20 };
    int result = sockMerchant(n, ar);
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
