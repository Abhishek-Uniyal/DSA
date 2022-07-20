class Solution {
public:
    int maximumNonAdjacentSum(vector<int> &nums)
{
    int prev,prev_p,curr;
    prev_p = 0;
    prev = nums[0];
    curr=prev;
    for(int i=1;i<nums.size();i++)
    {
        curr=max(prev,nums[i]+prev_p);
        prev_p=prev;
        prev=curr;
    }
    return curr;
}

int rob(vector<int>& nums)
{
   vector<int> temp1,temp2;
    int n=nums.size();
    if(n==1)
        return nums[0];
    for(int i=0;i<n;i++)
    {
        if(i!=0)
            temp1.push_back(nums[i]);
        if(i!=n-1)
            temp2.push_back(nums[i]);
    }
    return max(maximumNonAdjacentSum(temp1),maximumNonAdjacentSum(temp2));
} 
};