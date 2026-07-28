class Solution {
public:
    long long reverse(long long x) {
        string s;
        long long r;
        if(x>=0){
            s=to_string(x);
           std:: reverse(s.begin(),s.end());
            r=stoll(s);
            if(r<=pow(2,31) && r>=pow(-2,31)){
            return r;}
            else{
                return 0;
            }
        }
        else{
            x=-x;
            s=to_string(x);
            std::reverse(s.begin(),s.end());
            s='-'+s;
            r=stoll(s);
             if(r<=pow(2,31) && r>=pow(-2,31)){
            return r;}
            else{
                return 0;
            }
    

        }
        
    }
};