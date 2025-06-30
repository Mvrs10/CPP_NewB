#include <iostream>
#include "PalindromeLinkedList.h"

int main()
{
    ListNode* head = new ListNode(1);
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(1);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;

    bool result = isPalindrome(head);
    std::cout << result << std::endl;

    delete head;
    delete node1;
    delete node2;
    delete node3;
}

