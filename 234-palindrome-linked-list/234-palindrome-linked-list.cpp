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
    bool isPalindrome(ListNode* head) {
        int count = 0;
        ListNode * temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp -> next;
        }
        // cout << "count = " << count << endl;
        vector<int> tv;
        int i = 0, j;
        temp = head;
        while(i < count/2)
        {
            j = temp -> val;
            // cout << "j = " << j << endl;
            i++;
            temp = temp -> next;
            tv.push_back(j);
        }
        j = i;
        if(count%2 != 0)
        {
            temp = temp -> next;
            i++;
        
        }

        // cout << "Before while" << endl;
        while(i != count)
        {
            j--; i++;
            // cout << "j = " << tv[j] << " i = " << temp -> val << endl;
            if(temp -> val != tv[j])
            {
                // cout << "Not a pal - " << temp -> val << " and " << tv[j] << endl;
                return false;
            }
            else
            {
                // cout << temp -> val << endl;
                temp = temp -> next;
            }
        }
        return true;
    }
};