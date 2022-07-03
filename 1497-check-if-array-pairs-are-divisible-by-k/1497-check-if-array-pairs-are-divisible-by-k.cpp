class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[((arr[i]%k)+k)%k]++;
        }
        
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if(i->first == 0 )
            {
                if(i->second%2!=0)
                {
                    return false;
                }
                else
                    continue;
            }
            if(mp[k-i->first]!= i->second){
                return false;
            }
        }
    return true;
    }
};