class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<min(pre.length(), strs[i].length())){
                if(pre[j]!=strs[i][j]) {
                    break;
                }
                j++;
            }
            pre=pre.substr(0,j);
            
        }
        return pre;
        
    }
};