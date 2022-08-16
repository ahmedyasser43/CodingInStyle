class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> result(2);
        for(int i = 0;i<nums.size();i++){
            if(mp.count(target-nums[i])){
                result[0] = i;
                result[1] = mp[target-nums[i]];
                return result;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};