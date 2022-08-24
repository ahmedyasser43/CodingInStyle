class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> indices;
        int start =0,end=0,max=0;
        while(end<s.size()){
            if(indices.count(s[end]) && indices[s[end]] >= start){
                start = indices[s[end]] + 1;
            }
            indices[s[end]] = end;
            max = max<(end-start+1)? end-start+1 : max;
            end++;
        }
        return max;
    }
};