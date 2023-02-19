class Solution {
	public:
		int AlternatingaMaxLength(vector<int>&nums){
		    int n=nums.size();
		    int g=1,l=1;
		    for(int i=1;i<n;i++){
		        if(nums[i]>nums[i-1])
		        g=l+1;
		        if(nums[i]<nums[i-1])
		        l=g+1;
		    }
		    return max(g,l);
		}
};
