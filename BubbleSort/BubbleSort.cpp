// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


void countSwaps(std::vector<int> a) {
    int count = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1 ]> a[i]) {
            int temp;
           temp = a[i-1];
           a[i - 1] = a[i];
           a[i] = temp;
           count++;
           i -= i;
        }
    }
    /*for (int i = 0; i < a.size(); i++) {
        std::cout << a[i];
    }*/
    std::cout << "Array sorted in " << count << " swaps." << std::endl;
    std::cout << "First Element: " << *a.begin() << std::endl;
    std::cout << "Last Element: " << a.back();
}

int main()
{
    std::vector<int>a = { 6,4,1 };
    countSwaps(a);
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
