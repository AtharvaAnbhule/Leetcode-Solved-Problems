class Solution {
public:

int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet; // To store characters in the current substring
    int left = 0; // Left pointer for the sliding window
    int maxLength = 0; // Maximum length of substring found

    for (int right = 0; right < s.length(); ++right) {
        // If we encounter a repeating character, shrink the window from the left
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            left++;
        }
        // Add the current character to the set
        charSet.insert(s[right]);
        // Calculate the length of the current substring and update maxLength
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;

}
 
    
};
