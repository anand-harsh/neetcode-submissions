class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int> ans;
        int n=nums.size();
        int i=0;
        while(i<n){
            int j=i+1;
            while(j<n){
                if(nums[i]+nums[j]==t){
                    ans.push_back(i);
                    ans.push_back(j);
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};
