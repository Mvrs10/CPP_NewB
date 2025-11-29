#pragma once
#include "ListNode.h"

static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* head = new ListNode();
	ListNode* current = head;
	int carry = 0;

	while (true) {
		int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
		current->val = sum % 10;
		carry = sum / 10;

		l1 = l1 ? l1->next : nullptr;
		l2 = l2 ? l2->next : nullptr;

		if (l1 == nullptr && l2 == nullptr && carry == 0) break;
		current->next = new ListNode();
		current = current->next;
	}

	return head;
}