class Solution {
public:
    int strStr(string haystack, string needle) {
        int start = 0, size = needle.size(), haystackSize = haystack.size();
        while(start <= haystackSize-size){
            if(needle == haystack.substr(start,size)){
                return start;
            }
            start++;
        }
        return -1;
    }
};