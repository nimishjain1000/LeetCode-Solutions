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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        // move remaining node to next of next
        ListNode* remaining = head->next->next;
        
        //change head
        ListNode* newHead = head->next;
        // change next of second node
        head->next->next = head;
        
        head->next = swapPairs(remaining);
        
        return newHead;
    }
};
