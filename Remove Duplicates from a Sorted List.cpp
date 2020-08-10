// Link : https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode* cur = head;
		while (cur != NULL) {
			while (cur->next != NULL && cur->val == cur->next->val)
				cur->next = cur->next->next;
			cur = cur->next;
		}
		return head;
	}
};