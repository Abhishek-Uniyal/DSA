class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<int,int> map;
    int r=0,a=0,count=0;
    for(a=0;a<s.length();a++)
    {
        while(r<a && map[s[a]]!=0)
            {
                map[s[r]]--;
                r++;
            }
            map[s[a]]++;
            count=max(count,(a-r+1));
    }

    return count;
    }
};