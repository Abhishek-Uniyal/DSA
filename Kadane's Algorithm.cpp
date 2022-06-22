class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long max_s=arr[0], max_e = 0;
        for(int i=0;i<n;i++)
        {
            max_e=max_e+arr[i];
            max_s=(max_e>max_s)? max_e: max_s;
            max_e=(max_e<0)? 0: max_e;
            
        }
        return max_s;
    }
};
