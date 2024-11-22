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
    ListNode* middleNode(ListNode* head) {
    if(head->next==nullptr){
        return head;
    }
    ListNode* one= head;
    ListNode* two= head;
    while(two!=nullptr && two->next!=nullptr ){
        one =one->next;
        two= two->next->next;
    }
    return one; 
    }
}; 