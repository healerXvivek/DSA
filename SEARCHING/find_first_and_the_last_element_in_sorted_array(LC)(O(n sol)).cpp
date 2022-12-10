class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int n=nums.size();
        int first,last;
        int i;
        for( i=0;i<n;i++){
            if(nums[i]==t){
            first=i;
            break;
            }
        }
        if(i==n)
        first=-1;
        for(i=n-1;i>=0;i--){
            if(nums[i]==t){
            last=i;
            break;
            }
        }
        if(i==-1)
        last=-1;
        return {first,last};
    }
};
