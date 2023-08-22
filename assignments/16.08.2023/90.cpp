class Solution {
private:
    void backTrack(vector<vector<int>>& ans, vector<int>& nums, vector<int>& temp, int index) {
        ans.push_back(temp);  

        for (int i = index; i < nums.size(); i++) {
            if (i != index && nums[i] == nums[i - 1]){
                 continue;
            }
               
            temp.push_back(nums[i]);  
            backTrack(ans, nums, temp, i + 1);
            temp.pop_back();  
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp; 

        backTrack(ans, nums, temp, 0);
        return ans;
    }
};