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
    ListNode* solve(ListNode* l1, ListNode* l2,int carry){
        if(l1 && l2){
            return new ListNode((l1->val + l2->val + carry)%10, solve(l1->next,l2->next, (l1->val + l2->val + carry)/10));
        }
        if(!l2 && l1){
            return new ListNode((l1->val + carry)%10 , solve(l1->next,NULL, (l1->val + carry)/10));
        }
        if(!l1 && l2){
            return new ListNode((l2->val + carry)%10 , solve(NULL, l2->next, (l2->val + carry)/10));
        }
        if(carry){
            return new ListNode(carry);
        }
        return NULL;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return solve(l1,l2,0);
    }
};