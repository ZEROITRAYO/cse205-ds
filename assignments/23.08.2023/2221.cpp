class Solution {
public:
    int triangularSum(vector<int>& nums) {
            
            while(nums.size()>=1){
                for(int i=0;i<nums.size()-1;i++){
                    int sum=nums[i]+nums[i+1];
                    nums[i]=sum;
                    if(nums[i]>9){
                        nums[i]=nums[i]%10;
                    }
                }
                nums.pop_back();
            }
            return nums[0];
    }
};