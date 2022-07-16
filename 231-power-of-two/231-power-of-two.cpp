class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(log2(n)-round(log2(n))==0)
            return true;
    return false;
    }
};