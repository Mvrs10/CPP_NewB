#include <iostream>
#include "AddTwoLinkedListNumbers.h"

int main()
{
    ListNode* l1 = new ListNode(9, new ListNode(9, new ListNode(9)));
    ListNode* l2 = new ListNode(1, new ListNode(1, new ListNode(1)));

    ListNode* l3 = addTwoNumbers(l1, l2);

    while (l3) {
        std::cout << l3->val << "->";
        l3 = l3->next;
    }
    std::cout << "null";
}
