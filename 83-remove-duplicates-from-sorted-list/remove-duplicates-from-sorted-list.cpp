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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            //no linked list present
            return head;
        }
        else if(head->next==NULL){
            //1 linked list present
            return head;
        }
        else{
            ListNode*prev=head;
            ListNode*temp=head->next;

            while(temp!=NULL){
                if(temp->val==prev->val){
                    prev->next=temp->next;
                    temp->next=NULL;
                    delete temp;
                }
                else{
                    temp=temp->next;
                    prev=prev->next;
                }
                temp=prev->next;
            }
            return head;

        }
    }
};