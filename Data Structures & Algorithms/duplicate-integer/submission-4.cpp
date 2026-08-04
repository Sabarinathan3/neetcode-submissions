class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int num: nums){
            freq[num]++;
        }

        for(auto i : freq){
            if(i.second > 1){
                return true;
            }
        }
        return  false;
    }
};