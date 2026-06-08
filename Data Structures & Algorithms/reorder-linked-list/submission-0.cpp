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
    // divide using two pointers ;
    //reverse the second part;
    //now how to split the list inbto two parts;
    //also no nested function;
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
            //midpoint will be at slow pointer last location
        }
        ListNode* curr= slow->next;
        slow->next = nullptr;
        ListNode* prev= nullptr;
        ListNode* nxt;
        while(curr != NULL){
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        ListNode* l1 = head;
        ListNode* l2 = prev;
        ListNode* temp1;
        ListNode* temp2;

        while (l1 != nullptr && l2 != nullptr) {
            temp1 = l1->next;
            temp2 = l2->next;

            l1->next = l2;
            if (temp1 == nullptr) break;

            l2->next = temp1;

            l1 = temp1;
            l2 = temp2;
        }

    }
};