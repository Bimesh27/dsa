#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
    Node *head;
    Node *tail;

  public:
    LinkedList(){
        head = tail = nullptr;
    }

    void push_back(int val){
        Node *newNode = new Node(val);

        if(head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int middle_node(){
        Node *slow = head;
        Node *fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;
    }
};

int main(){
    LinkedList ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Middle elem of the list is : " << ll.middle_node() << endl;

    return 0;
}