#pragma once
#include "ListNode.h"
#include <stack>

static ListNode* reverseList(ListNode* head) {
	if (!head) return nullptr;
	ListNode* prev = nullptr;
	ListNode* current = head;
	ListNode* next = nullptr;
	while (current) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

static ListNode* reverseListWithStack(ListNode* head) {
	if (!head) return nullptr;
	std::stack<ListNode*> stack;
	stack.push(nullptr);
	while (head) {
		stack.push(head);
		head = head->next;
	}
	head = stack.top();
	stack.pop();
	ListNode* walk = head;
	while (walk) {
		walk->next = stack.top();
		stack.pop();
		walk = walk->next;
	}
	return head;
}

static ListNode* reverseListRecursively(ListNode* prev, ListNode* current) {
	if (!current) return prev;
	ListNode* next = current->next;
	current->next = prev;
	return reverseListRecursively(current, next);
}

static ListNode* recursiveReverseList(ListNode* head) {
	return reverseListRecursively(nullptr, head);
}