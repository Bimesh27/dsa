#include <iostream>
#include <list>
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

    Node *getHead(){
        return head;
    }
};

void print_list(Node *head){
    if(head == nullptr) {
        cout << "List is Empty" << endl;
        return;
    }

    Node *temp = head;
    while(temp != nullptr) {
        cout << temp->data << "->"; 
        temp = temp->next;
    }

    cout << "nullptr" << endl;
}

Node *merge_list(Node *list1, Node *list2){
    if(list1 == nullptr) {
        return list2;
    }

    if(list2 == nullptr) {
        return list1;
    }

    if(list1->data < list2->data) {
        list1->next = merge_list(list1->next, list2);
        return list1;
    } else {
        list2->next = merge_list(list1, list2->next);
        return list2;
    }
}

int main(){
    List list1;
    List list2;

    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);

    print_list(list1.getHead());

    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);

    print_list(list2.getHead());

    print_list(merge_list(list1.getHead(),list2.getHead()));

    return 0;
}