#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

bool hasCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;

    while (fast && fast->next) {  // Check if fast reaches NULL
        slow = slow->next;        // Move 1 step
        fast = fast->next->next;  // Move 2 steps

        if (slow == fast) {       // Cycle detected
            return true;
        }
    }

    return false;  // No cycle
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = head->next; // Creating a cycle

    if (hasCycle(head)) {
        cout << "Cycle detected! 🔄\n";
    } else {
        cout << "No cycle! ✅\n";
    }

    return 0;
}
