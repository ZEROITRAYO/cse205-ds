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
    int len(ListNode* head){
        int lenght=0;
        while(head!=NULL){
            lenght=lenght+1;
            head=head->next;
        }
        return lenght;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head==NULL || head->next==NULL){
            return NULL;
        }
        int lenghter=len(head);
        if(lenghter==n){
            head=head->next;
            return head;
        }
        else{
            int middle=lenghter-n;
            ListNode* temp=head;
            while(middle>1){
                middle=middle-1;
                temp=temp->next;
            }

            
                temp->next=temp->next->next;
            
            return  head;
        }

    }
};