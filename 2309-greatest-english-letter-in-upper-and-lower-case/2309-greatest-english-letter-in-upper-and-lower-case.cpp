class Solution {
public:
    string greatestLetter(string s) {
        string f="";
        string g="";
        for(int i=0;i<s.length();i++){
            if(count(s.begin(),s.end(),toupper(s[i]))>=1 && count(s.begin(),s.end(),tolower(s[i]))>=1){
                f+=toupper(s[i]);
            }
        }
        sort(f.begin(),f.end());
        reverse(f.begin(),f.end());
        if(f!=""){
            g+=f[0];
        return g;}
        else{
            return f;
        }
    }
};