class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupsize) {
        int n = hand.size();
        if(n % groupsize) return false;
        map<int,int> mp;
        for(auto x : hand) mp[x]++;
        priority_queue<int, vector<int>, greater<>> pq;
        for(auto x : mp) pq.push(x.first);

        while(!pq.empty()){
            int first = pq.top();
            for(int i = first; i < first+groupsize; i++){
                if(mp.find(i)==mp.end()) return false;
                mp[i]--;
                if(mp[i]==0){
                    if(i!=pq.top()) return false;
                    pq.pop();
                }
            }
        }
        return true;
    }
};