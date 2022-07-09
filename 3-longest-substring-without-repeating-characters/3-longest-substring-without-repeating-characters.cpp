class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char,int> map;
    int r=0,a=0,count=0;
    for(a=0;a<s.length();a++)
    {
        if((map.find(s[a])!=map.end()) && map[s[a]]>=r)
            {
                r=map[s[a]]+1;
            }
            map[s[a]]=a;
            count=max(count,(a-r+1));
    }
    return count;
    }
};