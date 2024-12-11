#include <iostream>
#include "LinkedList .h"

using namespace std;

int main()
{
    LinkedList l;
    l.insertNode(5);
    l.insertNode(10);
    l.insertNode(15);
    l.insertNode(20);
    l.Display();
    l.DeleteNode(15);
    l.Display();
    l.InsertAtBeginning(0);
    l.Display();
    l.DeleteAtBeginning();
    l.Display();
    l.DeleteAtEnd();
    l.Display();
    l.InsertAfter(15,10);
    l.Display();
    l.InsertAfter(2,1);
    l.Display();
    l.InsertBefore(0,5);
    l.Display();
    l.InsertBefore(2,6);
    l.Display();
    cout<<"THe Number Of Nodes In The Given Linked List is: "<< l.GetCount() << endl;
    l.GetDataByIndex(3);

    return 0;
}
