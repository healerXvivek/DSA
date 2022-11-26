class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j;
            for(j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                   ans.push_back(nums[j]);
                   break;
                }
            }
            if(j==n){
                int k;
                for(k=0;k<i;k++){
                    if(nums[k]>nums[i]){
                        ans.push_back(nums[k]);
                        break;
                    }
                }
                if(k==i){
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};
