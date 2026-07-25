class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Key -> Sorted string
        // Value -> List of original strings
        unordered_map<string, vector<string>> mp;

        // Traverse every word
        for (string word : strs) {

            // Make a copy because we don't want to modify the original word
            string key = word;

            // Sort the copy
            sort(key.begin(), key.end());

            // Store the original word using the sorted word as key
            mp[key].push_back(word);
        }

        // Final answer
        vector<vector<string>> ans;

        // Take all the values from the map
        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};