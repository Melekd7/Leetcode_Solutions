class Solution {
public:
    int minOperations(vector<int>& a, int k) {
        int s=0;
        for (int i=0;i<size(a);i++){
            s+=a[i];
        }
        return s%k;
    }
};