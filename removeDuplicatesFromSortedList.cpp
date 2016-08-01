/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
struct ListNode* temp=A;
struct ListNode* temp1;

if(temp->next==NULL)
return A;

while(temp->next!=NULL)
{
    if(temp->val==temp->next->val)
    {
        temp1=temp->next->next;
   

        free(temp->next);
        temp->next=temp1;
        //temp=temp->next;
        
       
    }
    else
    {
        temp=temp->next;
    }
}

return A;


  // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
