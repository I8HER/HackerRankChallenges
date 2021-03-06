// Minimum Swap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*int tempNum = 0, count = 0;
	int min = *min_element(arr.begin(), arr.end());
	vector<int>::iterator it = find(arr.begin(), arr.end(), min);
	int minIndex = distance(arr.begin(), it);

	if (arr[0] != min) {
		tempNum = arr[0];
		arr[0] = min;
		arr[minIndex] = tempNum;
		count++;
	}
	int max = *max_element(arr.begin(), arr.end());
	 it = find(arr.begin(), arr.end(), max);
	int maxIndex = distance(arr.begin(), it);
	if (arr[arr.size()-1 != max]) {
		tempNum = arr[arr.size()-1];
		arr[arr.size()-1] = max;
		arr[maxIndex] = tempNum;
		count++;
	}

	for (unsigned int i = 1; i < arr.size() - 1; i++) {
		if (i + 1 < arr.size()) {
			if (arr[i] > arr[i + 1]) {
				tempNum = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = tempNum;
				count++;
				for (int i = 0; i < arr.size(); i++) {
					std::cout << arr[i];
				}
				std::cout << '\n';
			}
		}
	}
	*/




int minimumSwaps(vector<int> arr) {
	int count = 0, min = arr[0], minIndex=0;

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < min) {
			minIndex = i;
			min = arr[i];
		}
	}

	if (minIndex != 0) {
		int temp = arr[0];
		arr[0] = arr[minIndex];
		arr[minIndex] = temp;
		count++;
	}


	for (int j = 1; j < arr.size(); j++) {
		int position = arr[j] - arr[0];
		if (arr[position] != arr[j]) {
			int temp = arr[position];
			arr[position] = arr[j];
			arr[j] = temp;
			j--;
			count++;
		}
	}

	return count;
}




int main()
{
	int result;
	vector<int>arr{4,3,1,2};
	result = minimumSwaps(arr);
	std::cout <<'\n'<< result;
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
