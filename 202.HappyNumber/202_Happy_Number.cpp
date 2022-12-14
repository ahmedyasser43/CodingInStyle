class Solution {
public:
    bool isHappy(int n) {
        set<int> nums;
        int sum;
        while(n){
            if(nums.count(n))
                return false;
            nums.insert(n);
            sum = 0;
            while(n!= 0){
                sum += ((n%10) * (n%10));
                n/=10;
            }
            if(sum ==1)
                return true;
            n = sum;
        }
        return false;
    }
};