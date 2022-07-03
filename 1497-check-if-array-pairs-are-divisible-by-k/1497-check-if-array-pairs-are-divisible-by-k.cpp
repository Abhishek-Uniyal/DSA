class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[((arr[i]%k)+k)%k]++;
        }
        
        for (int i=0;i<=k/2; i++)
        {
            if(i == 0)
            {
                if(mp[i]%2!=0)
                {
                    return false;
                }
                else 
                    continue;
            }            
            if(mp[k-i]!= mp[i]){
                return false;
            }
        }
    return true;
    }
};