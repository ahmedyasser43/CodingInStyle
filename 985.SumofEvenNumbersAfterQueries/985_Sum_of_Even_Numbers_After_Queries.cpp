class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        vector<int> result;
        for(int x : nums){
            if(x%2==0)
                sum+=x;
        }
        for(vector<int> query : queries){
            if(nums[query[1]]%2 ==  0){
                sum -= nums[query[1]];
            }
            nums[query[1]] += query[0];
            if(nums[query[1]]%2 == 0){
                sum+= nums[query[1]];
            }
            result.push_back(sum);
        }
        return result;
    }
};