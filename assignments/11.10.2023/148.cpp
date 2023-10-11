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
public:

    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }

        sort(v.rbegin(),v.rend());

        ListNode* ans=new ListNode(0);
        temp=ans;
        while(v.size()!=0){
            ListNode* node= new ListNode(v.back());
            temp->next=node;
            temp=temp->next;
            v.pop_back();
        }
        return ans->next;
    }
};