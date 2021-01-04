// 2D Array - DS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    vector<int>sum;                                          //Sum of all vector
   for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (j + 2 < arr.size() && i + 2 < arr.size()) {                       //Getting the hour glass shape
                int arrSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                sum.push_back(arrSum);          //adding all the elements
            }
        }
    }
    
        int maxSum = sum[0];
       for (int t = 0; t < sum.size(); t++) {
            if (sum[t] > maxSum) {
                maxSum = sum[t];

            }
        }

        return maxSum;
}

int main()
{
    vector<vector<int>>arr{ {-1,-1,0,-9,-2,-2},{-2,-1,-6,-8,-2,-5},{-1,-1,-1,-2,-3,-4},{-1,-9,-2,-4,-4,-5},{-7,-3,-3,-2,-9,-9},{-1,-3,-1,-2,-4,-5} };
    int maxsum = 0;
    maxsum = hourglassSum(arr);
    std::cout << maxsum;

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
