#pragma once
#include "ListNode.h"

static ListNode* getMidNode(ListNode* head) {
	ListNode* walk = head;
	ListNode* run = head;
	while (run->next && run->next->next) {
		walk = walk->next;
		run = run->next->next;
	}
	return walk;
}

static ListNode* reverseList(ListNode* head) {
	ListNode* current = head;
	ListNode* prev = nullptr;
	while (current) {
		ListNode* next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

static bool isPalindrome(ListNode* head) {
	if (!head->next) return true;

	ListNode* secondHead = reverseList(getMidNode(head)->next);
	ListNode* firstHead = head;
	while (secondHead) {
		if (firstHead->val != secondHead->val) return false;
		firstHead = firstHead->next;
		secondHead = secondHead->next;
	}
	return true;
}

