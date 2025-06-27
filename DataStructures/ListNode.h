#pragma once

#ifdef DATASTRUCTURES_DLL
#define DATASTRUCTURES_API __declspec(dllexport)
#else
#define DATASTRUCTURES_API __declspec(dllimport)
#endif


struct DATASTRUCTURES_API ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}	
};