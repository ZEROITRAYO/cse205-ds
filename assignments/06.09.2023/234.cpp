/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
   
    bool checkPalindrome(vector<int> arr) {
        int start = 0;
        int end = arr.size() - 1;

       
        while (start <= end) {
            if (arr[start] != arr[end]) {
                return false; 
            }
            start++;
            end--;
        }
        return true;
    }

public:
   
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

       
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
       return checkPalindrome(arr);
    }
};