class Solution {
public:
   string smallestPalindrome(string s) {
        vector<int>a(26,0);
        for(char c:s){
            a[c-'a']++;
        }
        string l= "";
        string m= "";
        for (int i=0;i<26;i++){
            if (a[i]>0) {
                char c=i+'a';
                l+=string(a[i]/2,c);
                if (a[i]%2!=0){
                    m=c;
                }
            }
        }
        string r=l;
        reverse(r.begin(),r.end());
        return l+m+r;
    }
};