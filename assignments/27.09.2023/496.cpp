class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i=0;i<nums1.size();i++){
            int index=-1;
            for(int j=0;i<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    index=j;
                    break;
                }
            }
            int temp=-1;
            if(index==-1){
                ans.push_back(-1);
            }
            else{
                for(int j=index+1;j<nums2.size();j++){
                    if(nums2[j]>nums1[i]){
                        temp=nums2[j];
                        break;
                    }
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};