#ifndef BINARYTREE_H
#define BINARYTREE_H
#include<iostream>
#include "Node.h"
using namespace std;

class BinaryTree{

public:
    Node* root;
    BinaryTree(){
        root = NULL;
    }

    bool isEmpty(Node* r){
      if(r == NULL){
        return true;
      }else{
          return false;
      }
    }
    ///InsertNode
    Node* InsertNode(Node* r, int value){
        if(isEmpty(r)){
            Node* newNode = new Node();
            newNode->data = value;
            r = newNode;
        }else if(value < r->data){
            r->left = InsertNode(r->left,value);
        }else{
            r->right = InsertNode(r->right,value);
        }
        return r;

    }
    void InsertNode(int value){
         root = InsertNode(root,value);
     }

    ///Print Tree Root L R.
    void DisplayPre(Node* r){
        if(!isEmpty(r)){
            cout<< r->data <<"\t";
            DisplayPre(r->left);
            DisplayPre(r->right);
        }else{
            return;
        }
    }
    ///Print Tree L Root R.
    void DisplayIn(Node* r){
        if(!isEmpty(r)){
            DisplayIn(r->left);
            cout<< r->data <<"\t";
            DisplayIn(r->right);
        }else{
            return;
        }
    }

    ///Print Tree L R Root.
    void DisplayPost(Node* r){
        if(!isEmpty(r)){
            DisplayPost(r->left);
            DisplayPost(r->right);
            cout<< r->data <<"\t";
        }else{
            return;
        }
    }
    ///FindMin
    Node* FindMin(Node* r){
        if(isEmpty(r)){
            return NULL;
        }else if(r->left == NULL){
            return r;
        }else{
            return FindMin(r->left);
        }
    }
    ///FindMax
    Node* FindMax(Node* r){
        if(isEmpty(r)){
            return NULL;
        }else if(r->right == NULL){
            return r;
        }else{
            return FindMax(r->right);
        }
    }
    ///DeleteNode
    Node* DeleteNode(Node* r, int key){
        if(isEmpty(r)){
            return NULL;
            ///left
        }else if(r == root && key == r->data){
            cout << "Root Node Can\'t Be Deleted!" << endl;
            return r;
        }else if(key < r->data){
            r->left = DeleteNode(r->left,key);
            ///right
        }else if(key > r->data){
            r->right = DeleteNode(r->right,key);
        }else{
            ///leaf
            if(r->left==NULL && r->right==NULL){
                r = NULL;
                ///left child
            }else if(r->left!=NULL && r->right==NULL){
                r->data=r->left->data;
                delete r->left;
                r->left=NULL;
                ///right child
            }else if(r->left==NULL && r->right!=NULL){
                r->data=r->right->data;
                delete r->right;
                r->right=NULL;
                ///2 children
            }else{
                Node* max = FindMax(r->left);
                r->data=max->data;
                r->left=DeleteNode(r->left, max->data);
            }
            return r;
        }
        return r;

    }


    int getDepth(Node* r){
        if(isEmpty(r)){
            return 0;
        }else{
            int lDepth = getDepth(r->left);
            int rDepth = getDepth(r->right);

            if(lDepth > rDepth){
                lDepth++;
                return lDepth;
            }else{
                rDepth++;
                return rDepth;
            }
        }
    }

    int getNodeDepth(Node* r,int key,int depth=0){
        if(isEmpty(r)){
            return 0;
        }
        if(r->data == key){
            return depth;
        }else if(r->data > key){
            depth++;
            return getNodeDepth(r->left, key, depth);
        }else{
            depth++;
            return getNodeDepth(r->right, key, depth);
        }
    }


};

#endif // BINARYTREE_H
