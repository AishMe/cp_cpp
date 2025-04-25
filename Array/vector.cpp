#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(5,0);
    cout << vec[0] << endl;

    vector<int> vec1 = {'a','b','c','d','e'};
    for (char i : vec1) cout << i << endl;

    // Vector functions: size, capacity, push_back, pop_back, front, back, at
    vector<int> vec2;
    cout << "Size before: " << vec2.size();

    vec2.push_back(24);
    vec2.push_back(34);
    vec2.push_back(64);
    vec2.push_back(54);
    vec2.pop_back();

    cout << "\nElements: ";
    for (int i : vec2) cout << i << " ";
    cout << "\nSize after: " << vec2.size() << endl;

    cout << "Front/First Element: " << vec2.front() << endl;
    cout << "Back/Last Element: " << vec2.back() << endl;
    cout << "Element at index _: " << vec2.at(1) << endl;

    return 0;
}



