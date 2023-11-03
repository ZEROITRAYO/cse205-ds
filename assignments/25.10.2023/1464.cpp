class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int ans=1;
        int count=2;
        while(!pq.empty() && count--){
            ans*=pq.top()-1;
            pq.pop();
        }
        return ans;
        
    }
};