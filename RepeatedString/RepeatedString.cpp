// RepeatedString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>


using namespace std;

unsigned long long int repeatedString(string s,unsigned long long int n) {
	unsigned long long int mainString = n / s.size();
	unsigned long long int subString = n % s.size();
	long sum = 0;
	unsigned long long int result = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a') {
			sum++;
		}
	}
	result = sum * mainString;
	if (subString != 0) {
		for (int i = 0; i < subString; i++) {
			if (s[i] == 'a') {
				result++;
			}
		}
	}


	return result;
}






int main() {

	string s = "a";
	unsigned long long int n= 1000000000000;
	unsigned long long int result = 0;
	result = repeatedString(s, n);
	std::cout << std::setprecision(15)<<result;





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
