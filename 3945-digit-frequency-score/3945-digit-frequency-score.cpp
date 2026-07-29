class Solution {
public:
    int digitFrequencyScore(int n){
       string s=to_string(n);
        int f=0;
        string d="";
        string e="";
        for(int i=0;i<s.length();i++){
            d=s[i];
            if(count(e.begin(),e.end(),s[i])==0){
            f+=stoi(d)*count(s.begin(),s.end(),s[i]);
            e+=s[i];

        }}
        return f;
    }
};