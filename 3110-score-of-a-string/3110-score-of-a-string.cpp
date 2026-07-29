class Solution {
public:
    int scoreOfString(string s) {
        int c=0;
        for(int i=0;i<s.length()-1;i++){
            c+=abs((int)s[i]-(int)s[i+1]);
        }
        return c;
        
    }
};