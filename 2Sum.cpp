class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>numsMap;
        for(int i = 0 ; i < n ; i++){
            int complement = target - nums[i];
            if(numsMap.count(complement)){
                return {i,numsMap[complement]};
            }
            numsMap[nums[i]] = i;
        }
        return {};
    }
};
