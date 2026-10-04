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
    ListNode* middleNode(ListNode* head) {
        ListNode* rab =head;
        ListNode* tor=head;

        while(rab!=NULL && rab->next!=NULL){
            rab=rab->next->next;
            tor=tor->next;
        }
        return tor;
    }
};