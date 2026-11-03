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

    // APPROACH - 02 OPTIMAL APPROACH
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head == nullptr) return head;
        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* evenHead = head -> next;

        while(even != nullptr && even->next != nullptr)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }


//--------------------------------------------------------------------------------------------------


    // // APPROACH - 01 BRUTE FORCE
    // ListNode* oddEvenList(ListNode* head) 
    // {
    //     if (head == nullptr)
    //         return head;
 
    //     vector<int> temp;
    //     ListNode* current = head;

    //     while (current != nullptr && current->next != nullptr) 
    //     {
    //         temp.push_back(current->val);
    //         current = current->next->next;
    //     }
    //     if(current) temp.push_back(current->val);
 
    //     current = head->next;

    //     while (current != nullptr && current->next != nullptr) 
    //     {
    //         temp.push_back(current->val);
    //         current = current->next->next;
    //     }
    //     if(current) temp.push_back(current->val);


    //     current = head;

    //     for (int value : temp) 
    //     {
    //         current->val = value;
    //         current = current->next;
    //     }
    //     return head;
    // }
};