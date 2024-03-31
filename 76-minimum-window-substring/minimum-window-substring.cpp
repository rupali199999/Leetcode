#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        // Array to store frequency of characters in t
        vector<int> charFreq(128, 0);
        for (char c : t)
            charFreq[c]++;
        
        int count = t.size(); // Number of characters to be found in window
        int minLen = INT_MAX; // Length of minimum window found so far
        int start = 0; // Start index of minimum window
        int left = 0; // Left pointer of window
        
        // Iterate through the string using right pointer
        for (int right = 0; right < s.size(); right++) {
            // Decrease the frequency of current character
            charFreq[s[right]]--;
            // If the frequency becomes >= 0, it means it's a character in t
            if (charFreq[s[right]] >= 0)
                count--;
            
            // If all characters in t are found, try to shrink the window from the left
            while (count == 0) {
                // Update minLen and start index if a smaller window is found
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                // Move left pointer to the right to shrink the window
                // If the character at left is in t, increase its frequency
                charFreq[s[left]]++;
                if (charFreq[s[left]] > 0)
                    count++;
                left++;
            }
        }
        
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
