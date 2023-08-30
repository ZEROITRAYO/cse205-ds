class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int ans[k];
      int j=0;
      int s=arr.size();
      int num=1;
      int i=0;
        while(k!=j && i<s){
            if(arr[i]!=num){
                ans[j++]=num++;
            }
            else{
              i++;
              num++;
              if(i==s){
                  i=i-1;
              }
            }

            }
        return ans[k-1];
    }
};