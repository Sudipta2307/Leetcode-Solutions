#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        
        // Count frequency of each character
        for (char c : s) {
            hash[c - 'a']++;
        }

        // Find the character with the maximum frequency
        char max_freq_char = 0;
        int max_freq = 0, n = s.size();
        for (int i = 0; i < 26; i++) {
            if (hash[i] > max_freq) {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }

        // If max_freq is greater than (n+1)/2, return ""
        if (max_freq > (n + 1) / 2) {
            return "";
        }

        // Place the most frequent character at even indices first
        string result(n, ' ');
        int index = 0;
        while (hash[max_freq_char - 'a'] > 0) {
            result[index] = max_freq_char;
            hash[max_freq_char - 'a']--;
            index += 2;
        }

        // Place the remaining characters
        for (int i = 0; i < 26; i++) {
            while (hash[i] > 0) {
                if (index >= n) index = 1; // Switch to odd indices when even indices are filled
                result[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        }

        return result;
    }
};
