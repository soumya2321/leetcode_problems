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
        ListNode* rabt=head;
        ListNode* tor=head;

            //even length       odd length
        while(rabt!=NULL and rabt ->next!=NULL){
            tor=tor->next;
            rabt=rabt->next->next;
        }
        return tor;
    }

};