/*

You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Input: The only input line contains a string of n characters.
Output: Print one integer: the length of the longest repetition.
Constraints: 1 <= n <= 10^6

Example
Input: ATTCGGGA
Output: 3

*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string dna;
    cin >> dna;
    
    int currentLen = 1;
    int maxLen = 1;
    if (dna.empty()) return 0;
    for (size_t i=0; i+1<dna.length(); ++i) {
        if (dna[i] != dna[i+1]) {
            maxLen = max(currentLen, maxLen);
            currentLen = 0;
        }
        currentLen++;
    }
    
    cout << max(currentLen, maxLen);
    return 0;
}
