class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<pair<int,int>> maxHeap;

        for(int i=0;i<n;i++) {
            maxHeap.push({score[i],i});
        }

        vector<string> res(n);

        for(int i=0;i<n;i++) {
            auto it = maxHeap.top();
            int currVal = it.first;
            int index = it.second;
            maxHeap.pop();

            if(i == 0) {
                res[index] = "Gold Medal";
            }
            else if(i == 1) {
                res[index] = "Silver Medal";
            }
            else if(i == 2) {
                res[index] = "Bronze Medal";
            }

            else {
                string temp = to_string(i+1);
                res[index] = temp;
            }
        }

        return res;
    }
};