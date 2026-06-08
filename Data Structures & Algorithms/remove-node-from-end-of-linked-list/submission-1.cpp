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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr || head ==nullptr) return 0;
        ListNode* l1 = head;
        int len = 0;
        while(l1 != nullptr){
            len++;
            l1 = l1->next;
        }
        cout<<len;
        if(len == n){
            head = head->next;
        } else{ 
        int i = 1;
        ListNode* temp = head;
        while(i != (len-n)){
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;}
        return head;
    }
};
