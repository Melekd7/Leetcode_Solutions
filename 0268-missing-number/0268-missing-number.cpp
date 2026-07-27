class Solution {
public:
    int missingNumber(vector<int>& a) {
        sort(a.begin(),a.end());
        int x=-1;
        for(int i=0;i<size(a)-1;i++){
            if(a[i+1]!=a[i]+1){
                x=i;
                break;
            }
        }
        if(x==-1){
            if(a[0]!=0){return 0;}
            else {return size(a);}
            }else{    
                return x+1;
    
}
}};