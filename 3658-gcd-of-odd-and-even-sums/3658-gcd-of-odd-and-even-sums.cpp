class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int o=0,e=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0){
                e+=i;
            }
            else{
                o+=i;
            }
        }
        return gcd(e,o);
    }
};