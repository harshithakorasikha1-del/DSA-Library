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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp1 = l1;
        ListNode*temp2 = l2;
        int c = 0;
        ListNode*ans = new ListNode(0);
        ListNode*temp = ans;
        while(temp1 && temp2) {
            int t = temp1->val + temp2->val;
            if(c != 0) {
                t+=c;
                c = 0;
            }
            c = t/10;
            t = t % 10;
            temp->next = new ListNode(t);
            temp = temp->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1) {
            int t = temp1->val;
            if(c!=0) {
                t+=c;
                c=0;
            }
            c = t/10;
            t = t % 10;
            temp->next = new ListNode(t);
            temp = temp->next;
            temp1 = temp1->next;
        }
        while(temp2) {
            int t = temp2->val;
            if(c!=0) {
                t+=c;
                c=0;
            }
            c = t/10;
            t = t % 10;
            temp->next = new ListNode(t);
            temp = temp->next;
            temp2 = temp2->next;
        }
        if(c!=0) {
            temp->next = new ListNode(c);
            temp = temp->next;
        }
        ans = ans->next;
        return ans;
    }
};