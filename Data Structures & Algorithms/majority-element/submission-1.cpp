class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int i : nums){
            freq[i]++;
        }

        int max_freq = 0;
        int result = 0;

        for(auto s : freq){
            if(s.second>max_freq){
                max_freq = s.second;
                result = s.first;
            }
        }
        return result;
    }
};