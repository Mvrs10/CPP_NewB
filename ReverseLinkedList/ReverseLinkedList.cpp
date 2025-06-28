#include <iostream>
#include "ReverseLinkedList.h"

int main()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);
    
    head = reverseList(head);
    std::cout << toString(head) << std::endl;
    head = reverseListWithStack(head);
    std::cout << toString(head) << std::endl;
    head = recursiveReverseList(head);
    std::cout << toString(head) << std::endl;
}

