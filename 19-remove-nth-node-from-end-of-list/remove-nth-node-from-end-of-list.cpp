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
    int Count(ListNode* head){
        int count=0;
        while(head!=nullptr){
            count++;
            head=head->next;
            
        }
        
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int a=Count(head);
        if(a==n)return head->next;
        int b=a-n;
        ListNode* temp=head;
       for(int i=1;i<b;i++){
        temp=temp->next;
       }
            if(temp->next!=nullptr){
                temp->next=temp->next->next;
            }
        
        return head;
    }
};