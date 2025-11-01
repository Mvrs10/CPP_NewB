#pragma once
#include "ListNode.h"
#include <vector>
#include <unordered_set>

static ListNode* modifiedList(std::vector<int>& nums, ListNode* head) {
	std::unordered_set<int> set(nums.begin(), nums.end());

	while (set.count(head->val)) {
		head = head->next;
	}

	ListNode* current = head;

	while (current->next != nullptr) {
		if (set.count(current->next->val))
			current->next = current->next->next;
		else
			current = current->next;
	}

	return head;
}