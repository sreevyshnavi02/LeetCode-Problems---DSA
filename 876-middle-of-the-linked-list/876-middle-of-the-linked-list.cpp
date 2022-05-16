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
        int n = 0;
        ListNode * start = head;
        ListNode * temp = head;
        while(temp != NULL)
        {
            n++;
            // cout << "val = " << temp -> val << endl;
            temp = temp -> next;
        }
        // cout << "Found size = " << n;
        int mid = n/2 + 1;
        
        
        temp = head;
        int x = 0;
        while(x < mid - 1)
        {
            // cout << "temp val = " << temp -> val << endl;
            temp = temp -> next;
            x++;
        }
        return(temp);
    }
};