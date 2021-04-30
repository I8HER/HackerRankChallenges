// SherlockAndAnagrams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include<algorithm>
void sherlockAndAnagrams(std::string s) {
    std::vector<std::string>letters;
    int result = 0;
    std::unordered_map<std::string, int>map;
    for (int i = 0; i < s.size(); i++) {
        for (int o = 0; o <= s.size()-i; o++) {
            std::string temp = s.substr(i, o);
            std::cout << temp << std::endl;
            std::sort(temp.begin(), temp.end());
            if (!temp.empty()) {
                letters.push_back(temp);
            }
            
        }
    }

    for (int i = 0; i < letters.size(); i++) {
            map[letters[i]] = map[letters[i]] + 1;
    }

    for (auto x : map) {
        if (x.second > 1) {
            result = result + (x.second * (x.second - 1) / 2);
            
        }
    }
    std::cout << result;
}

int main()
{
    std::string test="abcd";
    sherlockAndAnagrams(test);
    
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
