// Array Manipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long>endArr(n, 0);
    long max = 0;
    int Esize = endArr.size(), Qsize = queries.size();
    for (int j = 0; j < Qsize; j++) {
        for (int t = queries[j][0] - 1; t <= queries[j][1] - 1; t++) {
            endArr[t] += queries[j][2];
            if (endArr[t] > max) {
                max = endArr[t];
            }
        }
    }

    return max;
}


int main()
{
    long max, n=4;
    vector<vector<int>>queries{ {2,3,603},{1,1,286},{4,4,882} };
    max=arrayManipulation(n, queries);
    std::cout << max;
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
