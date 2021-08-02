/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int lenA=0,lenB=0;
        while(tempA)
        {
            lenA++;
            tempA=tempA->next;
        }
        while(tempB)
        {
            lenB++;
            tempB=tempB->next;
        }
        int d= abs(lenA-lenB);
        tempA=headA;
        tempB=headB;
        if(lenA>lenB)
        {
            while(d)
            {
                tempA=tempA->next;
                d--;
            }
        }
        else
        {
            while(d)
            {
                tempB=tempB->next;
                d--;
            }
        }
        while(tempA != tempB)
        {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }
};