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

class List {
    Node *head;
    Node *tail;

  public:
    List() { head = tail = nullptr; }

    void push_back(int val) {
        Node *newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print_list() {
        if (head == nullptr) {
            cout << "Linked list is empty" << endl;
            return;
        } else {
            Node *temp = head;
            while (temp != nullptr) {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "null" << endl;
        }
    }

    void reverse_list() {
        if (head == nullptr) {
            cout << "How can i suppose to reverse a empty list" << endl;
            return;
        }

        Node *prev = nullptr;
        Node *curr = head;
        Node *next = nullptr;

        tail = head;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main() {
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    ll.reverse_list();
    ll.print_list();
    return 0;
}