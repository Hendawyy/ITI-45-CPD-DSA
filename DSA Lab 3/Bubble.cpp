#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;

void Swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
void PrintArr(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void DoubleLinkedList::BubbleSort(){
    bool swapped;
    do{
        swapped=false;
        Node* current = head;
    while(current!=NULL && current->next != NULL){
        if(current->data > current->next->data){
            int temp = current->data;
            current->data = current->next->data;
            current->next->data = temp;
            swapped =true;
        }
        current=current->next;
    }
    }while(swapped);
}

int main()
{

    DoubleLinkedList DLL;
    DLL.insertNode(10);
    DLL.insertNode(5);
    DLL.insertNode(1);
    DLL.insertNode(12);
    DLL.insertNode(50);
    DLL.insertNode(6);
    DLL.insertNode(0);
    DLL.Display();
    DLL.BubbleSort();
    DLL.Display();

    return 0;
}
