#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
    BinaryTree BT;
    BT.InsertNode(45);
    BT.InsertNode(15);
    BT.InsertNode(79);
    BT.InsertNode(90);
    BT.InsertNode(10);
    BT.InsertNode(55);
    BT.InsertNode(12);
    BT.InsertNode(20);
    BT.InsertNode(50);
    BT.InsertNode(60);
    cout << "Display Tree Contents";
    cout << "\n----------------------------------------------------------------------------------------" << endl;
    BT.DisplayPre(BT.root);
    cout << "\n----------------------------------------------------------------------------------------" << endl;
    BT.DisplayIn(BT.root);
    cout << "\n----------------------------------------------------------------------------------------" << endl;
    BT.DisplayPost(BT.root);
    cout << "\n----------------------------------------------------------------------------------------" << endl;
    BT.DeleteNode(BT.root,45);
    BT.DeleteNode(BT.root,20);
    BT.DisplayPre(BT.root);
    cout <<"\nMinimum Value in The Tree is: "<< BT.FindMin(BT.root)->data<<endl;
    cout <<"Maximum Value in The Tree is: "<< BT.FindMax(BT.root)->data<<endl;
    cout << "\n----------------------------------------------------------------------------------------" << endl;
    cout <<"The Depth Of The Tree is: "<< BT.getDepth(BT.root)<<endl;
    cout << "\n----------------------------------------------------------------------------------------" << endl;
    cout <<"The Depth Of The Node [50] is: "<< BT.getNodeDepth(BT.root,50)<<endl;

    return 0;
}
