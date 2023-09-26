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
        int middle(ListNode* head){
            int lenght=0;
            ListNode* temp=head;
            while(temp!=NULL){
                lenght=lenght+1;
                temp=temp->next;
            }
            return lenght;
        }
    ListNode* middleNode(ListNode* head) {
        int len=middle(head)/2;
        while(len>0){
            head=head->next;
            len--;
        }
        return head;
        
    }
};