#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include <iostream>
using namespace std;
class DoubleLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node* prev;
    };
    Node* head;
    Node* tail;

public:
    DoubleLinkedList() {
        head = NULL;
        tail = NULL;
    }

    ~DoubleLinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    bool isEmpty() {
        return head == NULL;
    }

    /// Insert At the End
    void insertNode(int value) {
        Node* new_node = new Node;
        new_node->data = value;
        new_node->next = NULL;
        new_node->prev = NULL;

        if (isEmpty()) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }

    /// Print List
    void Display() {
        if (!isEmpty()) {
            Node* current = head;
            while (current != NULL) {
                cout << current << "\t" << current->data << endl;
                current = current->next;
            }
            cout << endl;
        } else {
            cout << "Linked List is Empty.\n";
        }
    }

    /// Delete Node
    void DeleteNode(int value) {
        Node* current = head;

        while (current != NULL && current->data != value) {
            current = current->next;
        }

        if (current == NULL) {
            cout << "Node not found.\n";
            return;
        }

        if (current == head) {
            head = current->next;
            if (head != NULL) {
                head->prev = NULL;
            }
        }

        if (current == tail) {
            tail = current->prev;
            if (tail != NULL) {
                tail->next = NULL;
            }
        }

        if (current->prev != NULL) {
            current->prev->next = current->next;
        }
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }

        delete current;
    }

    /// Insert After a Node
    void InsertAfter(int data, int afterData) {
        Node* current = head;
        while (current != NULL && current->data != afterData) {
            current = current->next;
        }
        if (current == NULL) {
            cout << "The Chosen Value " << afterData << " isn't an Element Of The Linked List" << endl;
            return;
        }

        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = current->next;
        new_node->prev = current;

        if (current->next != NULL) {
            current->next->prev = new_node;
        }
        current->next = new_node;

        if (current == tail) {
            tail = new_node;
        }
    }

    /// Insert At Beginning
    void InsertAtBeginning(int value) {
        Node* new_node = new Node;
        new_node->data = value;
        new_node->next = head;
        new_node->prev = NULL;

        if (isEmpty()) {
            head = tail = new_node;
        } else {
            head->prev = new_node;
            head = new_node;
        }
    }

    /// Delete At Beginning
    void DeleteAtBeginning() {
        if (isEmpty()) {
            cout << "Linked List is Empty.\n";
        } else {
            Node* FNode = head;
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete FNode;
        }
    }

    /// Delete At End
    void DeleteAtEnd() {
        if (isEmpty()) {
            cout << "Linked List is Empty.\n";
        } else if (head->next == NULL) {
            delete head;
            head = tail = NULL;
        } else {
            Node* ptr = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete ptr;
        }
    }


    /// Insert Before a Node
    void InsertBefore(int data, int beforeData) {
        if (isEmpty() || head->data == beforeData) {
            InsertAtBeginning(data);
            return;
        }

        Node* current = head;
        while (current != NULL && current->data != beforeData) {
            current = current->next;
        }

        if (current == NULL) {
            cout << "The Chosen Value " << beforeData << " isn't an Element Of The Linked List" << endl;
            return;
        }

        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = current;
        new_node->prev = current->prev;

        if (current->prev != NULL) {
            current->prev->next = new_node;
        }
        current->prev = new_node;

        if (current == head) {
            head = new_node;
        }
    }

    /// Get Count
    int GetCount() {
        int count = 0;
        Node* current = head;
        while (current != NULL) {
            count++;
            current = current->next;
        }
        return count;
    }

    /// Get Data By Index
    void GetDataByIndex(int index) {
        int count = 0;
        Node* current = head;
        while (current != NULL) {
            if (count == index) {
                cout << "Data At Index [" << index << "] is: " << current->data << endl;
                return;
            }
            count++;
            current = current->next;
        }
        cout << "Index Not Found" << endl;
    }

    void BubbleSort();
    void BubbleSortNodesBonus();
};


#endif /// DOUBLELINKEDLIST_H
