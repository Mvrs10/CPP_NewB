#include <iostream>
#include "DeletedNodes.h"

int main()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    std::vector<int> nums = { 3 };

    head = modifiedList(nums, head);

    ListNode* cur = head;
    while (cur != nullptr) {
        std::cout << cur->val << std::endl;
        cur = cur->next;
    }
}

