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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp = head;
        int c = 1;
        if(head == nullptr) return head;
        while(temp->next!=nullptr) {
            c++;
            temp = temp->next;
        }
        temp->next = head;
        int pos = c - k%c;
        pos = pos -1;
        ListNode*temp2 = head;
        while(pos-->0) {
            temp2 = temp2->next;
        }
        temp = temp2->next;
        temp2->next = nullptr;
        head = temp;
        return head;
    }
};