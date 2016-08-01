/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    struct ListNode* temp1;
    struct ListNode* temp=A;
       struct ListNode* temp2=A;
  set< ListNode* >S;
  //set<int>::iterator it;
  
  S.insert(temp);
  temp=temp->next;
  
  while(temp!=NULL)
  {  
      
      set<ListNode *>::iterator itr=S.find(temp);
     if(temp->next==NULL)
      {
          return NULL;
      }
     else if(itr==S.end())
      {
          S.insert(temp);
          temp=temp->next;
      }
      else if(itr!=S.end())
      {
        
        temp1=*itr;
        while(temp2!=temp1)
        {
            temp2=temp2->next;
        }
        
          return temp2;
}
  }

    
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
