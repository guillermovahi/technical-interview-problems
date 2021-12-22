// Definition for singly-linked list.
struct ListNode 
{
	int val;
	struct ListNode *next;
 };


struct ListNode *getNewNode(int value)
{
    struct ListNode *newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
    newNode -> val = value;
    newNode -> next = 0; // Es como poner NULL
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *result = getNewNode(0);
    struct ListNode *temp = result;
    int carry = 0;
    while(l1 || l2 || carry)
    {
        if(l1)
        {
            carry += l1->val;
            l1 = l1-> next;
        }
        if(l2)
        {
            carry += l2->val;
            l2 = l2->next;
        }
        
        temp->next = getNewNode(carry % 10);
        temp = temp->next;
        
        carry = carry / 10;
    }
    
    return result->next;
}