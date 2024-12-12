//#include <iostream>
//
//using namespace std;
//
//class Exception{
//public:
//    int code;
//    string Name;
//};
//class QueueLL{
//private:
//    struct Node{
//        int data;
//        Node* next;
//    };
//    Node* Head;
//    Node* Tail;
//
//public:
//    QueueLL(){
//        Head = NULL;
//        Tail = NULL;
//    }
//
//    ~QueueLL(){
//        Node* current = Head;
//
//        while (current != NULL) {
//            Node* nextNode = current->next;
//            delete current;
//            current = nextNode;
//        }
//    }
//
//    bool isEmpty(){
//      if(Head == NULL){
//        return true;
//      }else{
//          return false;
//      }
//    }
//
//    void EnQueue(int value){
//        Node* new_node;
//        new_node = new Node;
//        new_node->data = value;
//        new_node->next=NULL;
//
//        if (isEmpty()){
//            Head = Tail = new_node;
//        }else {
//            Tail->next = new_node;
//            Tail = new_node;
//        }
//    }
//
//    int DeQueue(){
//        int value;
//        if(isEmpty()){
//          Exception e;
//          e.code=101;
//          e.Name="\n Queue is Empty....!!";
//          throw e;
//        }else if (Head == Tail){
//            Node* temp = Head;
//            value = Head->data;
//            Head = Tail = NULL;
//            delete(temp);
//            return value;
//        }else{
//            Node* temp = Head;
//            value = Head->data;
//            Head = Head->next;
//            delete(temp);
//            return value;
//        }
//    }
//
//    int GetFront(){
//        if(isEmpty()){
//          Exception e;
//          e.code=102;
//          e.Name="\n Queue is Empty....!!";
//          throw e;
//        }else{
//            return Head->data;
//        }
//    }
//
//    int GetRear(){
//        if(isEmpty()){
//          Exception e;
//          e.code=103;
//          e.Name="\n Queue is Empty....!!";
//          throw e;
//        }else{
//            return Tail->data;
//        }
//    }
//
//    void Display(){
//        if(!isEmpty()){
//            Node* current = Head;
//            cout << "Queue Contents: ";
//            while(current != NULL){
//                cout<<current->data<<"\t";
//                current = current->next;
//            }
//            cout<<endl;
//        }else{
//            cout<<"Queue is Empty.\n";
//        }
//    }
//};
//
//int main() {
//
//    QueueLL Q;
//
//
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "GetFront: " << Q.GetFront() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "GetRear: " << Q.GetRear() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//
//    Q.EnQueue(10);
//    Q.EnQueue(20);
//    Q.EnQueue(30);
//    Q.EnQueue(40);
//    Q.EnQueue(50);
//
//    Q.Display();
//    try{
//        cout << "GetFront: " << Q.GetFront() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "GetFront: " << Q.GetFront() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "GetRear: " << Q.GetRear() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    Q.Display();
//    Q.EnQueue(80);
//    Q.EnQueue(90);
//    Q.Display();
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "GetFront: " << Q.GetFront() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "GetRear: " << Q.GetRear() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "GetFront: " << Q.GetFront() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "GetRear: " << Q.GetRear() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//    Q.Display();
//    try{
//        cout << "DeQueue: " << Q.DeQueue() << endl;
//    }catch(Exception e){
//        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
//    }
//
//    return 0;
//}
