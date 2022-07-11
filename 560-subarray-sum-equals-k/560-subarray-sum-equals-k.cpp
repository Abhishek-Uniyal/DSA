class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int sum=0,count=0;
        unordered_map<int,int> mp;
        mp[sum]=1;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(mp.find(sum-k)!=mp.end())
                count+=mp[sum-k];
            mp[sum]++;
        }
    return count;
    }
};