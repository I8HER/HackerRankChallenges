// Count Triplets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>

long countTriplets(std::vector<long> arr, long r) {
    long result = 0;
    std::unordered_map<long,long>left,right;
    for (int i = 0; i < arr.size(); i++) {
        result += right[arr[i]];
        right[arr[i] * r] += left[arr[i]];
        left[arr[i] * r]++;
    }
    return result;
}

int main()
{
    std::vector<long>arr = { 1,2,2,4 };
    /*for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i];
    }*/
    long r = 2;
    long result;
    result=countTriplets(arr, r);
    std::cout << result;
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
