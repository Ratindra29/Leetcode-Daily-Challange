class Solution {
public:
    
    ListNode* reverse(ListNode* root)
    {
        if(root==NULL or root->next==NULL)
        {
            return root;
        }
        
        ListNode* head=reverse(root->next);
        
        root->next->next=root;
        root->next=NULL;
        
        return head;
    }
    
    
    
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL && head->next==NULL)
        {
            return true;
        }
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
        
        if(slow->next==NULL)
        {
            return head->val==slow->val;
        }
        
        
        ListNode*mid;
        if(fast==NULL)
        {
            mid=slow;
        }else
        {
            mid=slow->next;
        }
        
        fast=reverse(mid);
        slow=head;
        
    
        
        while(fast and slow)
        {
            if(slow->val!=fast->val)
            {
                return false;
            }
            
            slow=slow->next;
            fast=fast->next;
        }
        
        return true;
    }
};