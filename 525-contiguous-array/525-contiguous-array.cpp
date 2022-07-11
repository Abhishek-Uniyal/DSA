class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int z0=0,z1=0;
        int ans=0;
        int temp = (z1-z0);
        mp[temp]=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
               z0+=1; 
            }
            else
            {
               z1+=1; 
            }
            temp = (z1-z0);
            if(mp.find(temp)!=mp.end())
            {
                ans=max(ans,i-mp[temp]);
            }
            else
                mp[temp]=i;
        }
        return ans;
    }
};