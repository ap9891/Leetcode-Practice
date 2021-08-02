/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
    if(head == NULL)
    {
        return NULL;
    }
        Node* curr = head;
        while(curr != NULL)
        {
            if(curr->child != NULL)
            {
                Node* temp1 = curr->next;
                Node* temp = flatten(curr->child);
                temp->prev = curr;
                curr->next = temp;
                Node* tail = temp;
                while(tail->next != NULL)
                    tail=tail->next;
                    tail->next = temp1;
                    if(temp1 != NULL)
                        temp1->prev =  tail;
                        curr->child = NULL;
            }
            curr = curr->next;
            
        }
        
        return head;
        }
};