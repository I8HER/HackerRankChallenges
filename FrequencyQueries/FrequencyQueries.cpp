// FrequencyQueries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include <utility>

std::vector<int> freqQuery(std::vector<std::vector<int>> queries) {
    std::unordered_map<int, int>map1,map2;
    std::vector<int>result;
    for (int i = 0; i < queries.size(); i++) {
        switch (queries[i][0]) {
        case 1:
            if (map1[queries[i][1]] > 0) {
                map2[map1[queries[i][1]]]--;
            }
            map1[queries[i][1]]++;
            map2[map1[queries[i][1]]]++;
            break;
        case 2:
            if (map1[queries[i][1]] > 0) {
                map2[map1[queries[i][1]]]--;
                map1[queries[i][1]]--;
                map2[map1[queries[i][1]]]++;
            }

            break;
        case 3:
            if (map2[queries[i][1]]>0) {
                result.push_back(1);
            }
            else {
                result.push_back(0);
            }
            break;

        }
    }
    return result;
}

int main()
{
    std::vector<int>result;
    std::vector<std::vector<int>> queries{ {3,4},{2,1003},{1,16},{3,1} };
    result = freqQuery(queries);
   for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << std::endl;
    }
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
