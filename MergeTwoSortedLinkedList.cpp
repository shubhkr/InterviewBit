/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
      
struct ListNode * current;
struct ListNode * first;
struct ListNode * second;
first=A;
second=B;
int flag=0;  
    
if(first==NULL)
    return B;
if(second==NULL)
    return A;



while(first!=NULL && second!=NULL)
{
if((first->val < second->val) )
{   if(flag==0)
{
	current=first;
	first=first->next;
	flag=1;
}
else{

current->next=first;
current=current->next;
first=first->next;

}
}
else if((first->val >= second->val))
{
  if(flag==0)
	{
	
	current=second;
	A=second;
	second=second->next;
	flag=1;
}
else
{
current->next=second;
current=current->next;
second=second->next;	
}
}
}

	if(first==NULL)
	{ 
	while(second!=NULL)
	{
	
		current->next=second;
		current=current->next;
		second=second->next;
	}
}
	else
	{ while(first!=NULL)
	{
	
	
		current->next=first;
		current=current->next;
		first=first->next;
	}}
	
	


return A;

} 
