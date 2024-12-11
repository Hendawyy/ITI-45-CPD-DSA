#ifndef LINKEDLIST _H
#define LINKEDLIST _H
#include <iostream>

using namespace std;


class LinkedList{
private:
    struct Node{
        int data;
        Node* next;
    };
    Node* head;

public:
    LinkedList(){
        head = NULL;
    }

    ~LinkedList(){
        Node* current = head;

        while (current != NULL) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    bool isEmpty(){
      if(head == NULL){
        return true;
      }else{
          return false;
      }
    }

    ///Insert AT The END.
    void insertNode(int value){
        Node* new_node, *last;
        new_node = new Node;
        new_node->data = value;
        new_node->next=NULL;
        if (isEmpty()){
            head = new_node;
        }else {
            last = head;
            while(last->next != NULL){
                last = last->next;
            }
            last->next = new_node;
        }
    }

    ///Print List.
    void Display(){
        if(!isEmpty()){
            Node* current;
            current = head;
            while(current != NULL){
                cout<<current<<"\t"<<current->data<<endl;
                current = current->next;
            }
            cout<<endl;
        }else{
            cout<<"Linked List is Empty.\n";
        }
    }

    ///Delete Node.
    void DeleteNode(int value){
        Node* current;
        Node* prev;
        current = head;
        prev = head;

        if(current->data == value){
            head = current->next;
            free(current);
            return;
        }
        while(current->data != value){
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        free(current);
    }

    ///InsertAtBeginning
    void InsertAtBeginning(int value){
        Node* new_node = new Node;
        new_node->data = value;
        new_node->next=head;
        head = new_node;
    }

    ///DeleteAtBeginning
    void DeleteAtBeginning(){
        if(isEmpty()){
          cout<<"Linked List is Empty.\n";
        }else{
          Node* FNode;
          FNode = head;
          head = FNode->next;
          free(FNode);
        }
    }

    ///DeleteAtEnd
    void DeleteAtEnd(){
        if(isEmpty()){
          cout<<"Linked List is Empty.\n";
        }else if(head->next == NULL){
          free(head);
          head=NULL;
        }else{
          Node* ptr = head;
          while(ptr->next->next != NULL){
            ptr = ptr->next;
          }
          free(ptr->next);
          ptr->next=NULL;
        }
    }

    ///InsertAfter
    void InsertAfter(int data, int afterData){
        Node* new_node, *current;
        current = head;
        while(current!=NULL && current->data != afterData){
            current = current->next;
        }
        if(current == NULL){
            cout<<"The Chosen Value "<<afterData << " isn\'t an Element OF The Linked List"<<endl;
            return;
        }
        new_node = new Node;
        new_node->data = data;
        new_node->next = current->next;
        current->next = new_node;
    }

    ///InsertBefore
    void InsertBefore(int data, int beforeData){
        if(isEmpty() || head->data ==beforeData){
            InsertAtBeginning(data);
            return;
        }
        Node* current, *prev, *new_node;
        current = head;
        prev = NULL;

        while(current!=NULL && current->data != beforeData){
            prev = current;
            current = current->next;
        }
        if(current == NULL){
            cout<<"The Chosen Value "<<beforeData << " isn\'t an Element OF The Linked List"<<endl;
            return;
        }
        new_node = new Node;
        new_node->data = data;
        new_node->next = current;
        prev->next = new_node;
    }

    ///GetCount
    int GetCount(){
        int count=0;
        Node* current = head;
        while(current != NULL){
            count++;
            current = current->next;
        }
        return count;
    }

    ///GetDataByIndex
    void GetDataByIndex(int index){
        int count=0;
        Node* current = head;
        while(current != NULL){
            if(count==index){
                cout<<"Data At Index ["<<index<<"] is: "<<current->data<<endl;
                return;
            }
            count++;
            current = current->next;
        }
        cout <<"Index Not Found"<<endl;
    }

};

#endif // LINKEDLIST _H
