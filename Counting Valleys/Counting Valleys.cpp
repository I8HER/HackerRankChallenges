// Counting Valleys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>

int countingValleys(int steps, std::string path) {
	int result = 0;
	int down = 0;
	int Slevel = 0;
	int valley = 0;
	for (int i = 0; i < steps; i++) {
		if (path[i] == 'D' && Slevel == 0) {
			valley = 1;
		}
		if (valley != 1) {
			if (path[i] == 'D') {
				Slevel -= 1;
				std::cout << Slevel << '\n';
			}
			else if (path[i] == 'U') {
				Slevel += 1;
				std::cout << Slevel << '\n';
			}
		}
		if (valley == 1) {
			if (path[i] == 'D') {
				Slevel -= 1;
				std::cout << Slevel << '\n';
			}
			else if (path[i] == 'U') {
				Slevel += 1;
				std::cout << Slevel << '\n';
			}
			if (Slevel == 0) {
				result += 1;
				valley = 0;
			}
		}
	}
	return result;
}

int main() {
	int steps = 100;
	int result;
	std::string path = "DUDUUUUUUUUDUDDUUDUUDDDUUDDDDDUUDUUUUDDDUUUUUUUDDUDUDUUUDDDDUUDDDUDDDDUUDDUDDUUUDUUUDUUDUDUDDDDDDDDD";

	result = countingValleys(steps, path);
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
