class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (auto i:s) {
            mp[i]++;
        }

        string ans;

        while (!mp.empty()) {
            char mostFrequentChar = ' ';
            int maxFreq = 0;
            for (auto key : mp) {
                if (key.second > maxFreq) {
                    maxFreq = key.second;
                    mostFrequentChar = key.first;
                }
            }
            
            while (maxFreq > 0) {
                ans += mostFrequentChar;
                maxFreq--;
            }
            
            mp.erase(mostFrequentChar);
        }

        return ans;
    }
};