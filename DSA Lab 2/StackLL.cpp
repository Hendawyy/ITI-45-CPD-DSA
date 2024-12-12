//#include <iostream>
//using namespace std;
//
//class Exception{
//public:
//    int code;
//    string Name;
//};
//
//class StackLL{
//private:
//    struct Node{
//        int data;
//        Node* next;
//    };
//    Node* tos;
//
//public:
//    StackLL(){
//        tos = NULL;
//    }
//
//    ~StackLL(){
//        Node* current = tos;
//
//        while (current != NULL) {
//            Node* nextNode = current->next;
//            delete current;
//            current = nextNode;
//        }
//    }
//
//    bool isEmpty(){
//      if(tos == NULL){
//        return true;
//      }else{
//          return false;
//      }
//    }
//
//   void Push(int value){
//        Node* new_node = new Node;
//        new_node->data = value;
//        new_node->next=tos;
//        tos = new_node;
//    }
//
//    int Pop(){
//        if(isEmpty()){
//          Exception e;
//          e.code=101;
//          e.Name="\n Sorry, Stack is Empty....!!";
//          throw e;
//        }else{
//          int value;
//          Node* temp;
//          temp = tos;
//          tos = temp->next;
//          value = temp->data;
//          delete(temp);
//          return value;
//        }
//    }
//
//    int Peak(){
//        if(isEmpty()){
//          Exception e;
//          e.code=102;
//          e.Name="\n Sorry, Stack is Empty....!!";
//          throw e;
//        }else{
//          return tos->data;
//        }
//    }
//
//    void Display(){
//        if(!isEmpty()){
//            Node* current;
//            current = tos;
//            cout<<"Stack Elements:";
//            while(current != NULL){
//                cout<<current->data<<"\t";
//                current = current->next;
//            }
//            cout<<endl;
//        }else{
//            cout<<"Stack is Empty.\n";
//        }
//    }
//
//};
//
//
//int main() {
//
//    StackLL S;
//    try{
//        cout << "Pop: " << S.Pop() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<"! Stack is Empty "<<endl;
//    }
//
//    try{
//        cout << "Stack Top: " << S.Peak() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<"! Stack is Empty "<<endl;
//    }
//
//    S.Push(10);
//    S.Push(20);
//    S.Push(30);
//
//    S.Display();
//    try{
//        cout << "Stack Top: " << S.Peak() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<"! Stack is Empty "<<endl;
//    }
//
//    S.Display();
//    try{
//        cout << "Pop: " << S.Pop() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<"! Stack is Empty "<<endl;
//    }
//    try{
//        cout << "Pop: " << S.Pop() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<"! Stack is Empty "<<endl;
//    }
//    S.Display();
//    cout << endl << endl << endl ;
//
//    StackLL S1;
//    S1.Push(1);
//    S1.Push(2);
//    S1.Push(3);
//    S1.Push(4);
//    S1.Push(5);
//    S1.Push(6);
//    S1.Display();
//    try{
//        cout << "Stack Top: " << S1.Peak() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<"! Stack is Empty "<<endl;
//    }
//
//
//    return 0;
//}
