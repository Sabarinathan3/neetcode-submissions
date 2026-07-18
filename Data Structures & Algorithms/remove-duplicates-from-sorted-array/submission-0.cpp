class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            if(res.empty()){
                res.push_back(nums[i]);
            }
            else if(nums[i] != res.back()){
                res.push_back(nums[i]);
            }
        }
        nums = res;
        return nums.size();
    }
};