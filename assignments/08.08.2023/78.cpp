class Solution {
public:
    void recc(vector<int>& nums,vector<vector<int>>& ans,vector<int> temp,int i){
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        else{
            temp.push_back(nums[i]);
            recc(nums,ans,temp,i+1);
            temp.pop_back();
            recc(nums,ans,temp,i+1);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    
        vector<vector<int>> ans;
        vector<int> temp;
        
        recc(nums,ans,temp,0);
        return ans;
    }
};