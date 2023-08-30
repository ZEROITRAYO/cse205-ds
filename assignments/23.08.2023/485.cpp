class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxer=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count=count+1;
            }
            else{
                maxer=max(count,maxer);
                count=0;
            }
        }
        maxer=max(count,maxer);
        return maxer;
    }
};