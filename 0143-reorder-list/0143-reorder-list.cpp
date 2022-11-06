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
    void reorderList(ListNode* head) {
       ListNode *secondlast=head;
        if(head==NULL||head->next==NULL||head->next->next==NULL)return ;
       while(secondlast->next->next)
            secondlast=secondlast->next;
        
        secondlast->next->next=head->next;
        head->next=secondlast->next;
        secondlast->next=NULL;
        reorderList(head->next->next);
        
        
    }
};