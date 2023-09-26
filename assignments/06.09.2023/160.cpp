/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 =headA;
        ListNode* temp2 =headB;
        int lenght1=0;
        int lenght2=0;
        while(temp1!=NULL){
            lenght1++;
            temp1=temp1->next;
        }
         while(temp2!=NULL){
            lenght2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        int diff=abs(lenght1-lenght2);
        if(lenght1<lenght2){
            while(diff!=0){
                diff--;
                temp2=temp2->next;
            }
        }
        else{
            while(diff!=0){
                diff--;
                temp1=temp1->next;
            }
        }
        while(temp1!=temp2){
             temp1=temp1->next;
             temp2=temp2->next;
        }
        return temp1;
    }

};