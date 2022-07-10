class Solution {
public:
    long f(vector<int>& s, int k)
    {
    if(k==0)
        return 0;
    unordered_map<long,long> map;
    long unique=0,count=0,a=0,r=0;
    for(a=0;a<s.size();a++)
    {
        if(map.find(s[a])==map.end())
        {
            while(unique==k)
            {
                map[s[r]]--;
                if(map[s[r]]==0)
                {
                    map.erase(s[r]);
                    unique--;
                }
                r++;
            }
            unique++;
        }
        map[s[a]]++;
        count=count+(a-r+1);
    }
        return count;
    }
    long subarraysWithKDistinct(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};