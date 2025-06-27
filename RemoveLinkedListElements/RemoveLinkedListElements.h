#pragma once
#include "ListNode.h"

static ListNode* removeElements(ListNode* head, int val) {
	while (head && head->val == val) {
		head = head->next;
	}
	if (!head) return head;
	ListNode* walk = head;
	ListNode* prev = walk;
	while (walk) {
		if (walk->val == val) {
			prev->next = walk->next;
		}
		else
		{
			prev = walk;
		}
		walk = walk->next;
	}
	return head;
}