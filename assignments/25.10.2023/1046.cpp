class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int a : stones) pq.push(a);
        while(pq.size() > 1)  {
            int it1 = pq.top();
            pq.pop();
            int it2 = pq.top();
            pq.pop();

            if(it1 == it2) continue;
            else pq.push(abs(it1 - it2));
        }
        return pq.size() == 0 ? 0 : pq.top();
    }
};