class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int num : nums1){
            auto found=find (nums2.begin(), nums2.end(), num);
            auto i=nums2.begin();
            for(i=found;i!=nums2.end();i++){
                if(nums2[i-nums2.begin()]>num){
                    ans.push_back(nums2[i-nums2.begin()]);
                    break;
                }     
            }
            if(i==nums2.end()){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
