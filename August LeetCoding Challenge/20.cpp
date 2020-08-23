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
    ListNode* reverseList(ListNode* head){
        if (!head || !head->next) return head;
        
        auto pre=head, curr=head->next;
        while (curr){
            auto tmp=curr->next;
            curr->next=pre;
            pre=curr;
            curr=tmp;
        }
        head->next=nullptr;
        return pre;
    }

    void reorderList(ListNode* head) {
        if (head && head->next){
            auto s=head, f=head;
            while (f && f->next && f->next->next){
                s=s->next;
                f=f->next->next;
            }
            auto se=s->next;
            s->next=nullptr;
            
            se=reverseList(se);
            auto p1=head, p2=se;
            while (p2){
                auto t1=p1->next, t2=p2->next;
                p1->next=p2;
                p2->next=t1;
                p1=t1, p2=t2;
            }
        }
    }
};
