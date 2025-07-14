#include <iostream>
#include "BinaryNumberLinkedList.h"

int main()
{
    ListNode head(1);
    ListNode node1(0);
    ListNode node2(1);
    head.next = &node1;
    node1.next = &node2;

    int result = getDecimalValue(&head);
    std::cout << result << std::endl;
}

