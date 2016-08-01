/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    
    struct ListNode * temp=A;
int count=0;
while(temp!=NULL)
{
    count++;
    temp=temp->next;
}
int a[count];
int i=0;
temp=A;
while(temp!=NULL)
{
    a[i]=temp->val;
    i++;
    temp=temp->next;
}
int mid;
if(count%2!=0)
{
    mid=count/2+1;
    for(int j=0;j<mid;j++)
    {
        if(a[j]!=a[i-j-1])
        {
            return 0;
        }
        else if(j==mid-1)
        {
            return 1;
        }
    }
}
else
{
        mid=count/2;
    for(int j=0;j<mid;j++)
    {
        if(a[j]!=a[i-j-1])
        {
            return 0;
        }
     
    }
    return 1;
}
    
}
