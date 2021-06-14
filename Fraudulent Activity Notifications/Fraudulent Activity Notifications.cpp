// Fraudulent Activity Notifications.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int>freq(200, 0);
int median(int d) {
    int sum = 0;
    for (int i = 0; i < 200; i++) {
        sum += freq[i];
        if (2 * sum > d) {
            return (2 * i);
        }
        else if (2 * sum == d) {
            return i * 2+1;
        }
    }
    return -1;
}
int activityNotifications(vector<int> expenditure, int d) {
    int result = 0;
    for (int i = 0; i < d; i++) {
        freq[expenditure[i]]++;
    }
    for (int i = d; i < expenditure.size(); i++) {
            if (expenditure[i] >= median(d)) {
                result++;
            }
            freq[expenditure[i-d]]--;
        freq[expenditure[i]]++;
   }
    return result;
}

int main()
{
    std::vector<int>test = {1,2,3,4,4};
    int d = 4, result;

    result = activityNotifications(test, d);
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
