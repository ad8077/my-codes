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
    ListNode *add(ListNode *l1,ListNode *l2,int carry){
        
        ListNode *temp;
        if(!l1&&!l2){
            if(carry>0)return new ListNode(carry);
            return NULL ;
        }
        int a=l1?l1->val:0;
         int b=l2?l2->val:0;
        int sum=(a+b+carry);
        temp=new ListNode (sum%10);
        temp->next=add(l1?l1->next:l1,l2?l2->next:l2,sum/10);
        return temp;
        
      
    }
    
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      return add(l1,l2,0);
        
    } 
};