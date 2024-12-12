//#include <iostream>
//using namespace std;
//
//class Exception{
//public:
//    int code;
//    string Name;
//};
//class Stack {
//    private:
//        int *Stk,tos,Size;
//    public:
//        Stack(int Size){
//            this -> Size = Size;
//            Stk = new int[Size];
//            tos = -1;
//        }
//        ~Stack(){
//            delete[] Stk;
//        }
//        bool IsFull(){
//            return (tos == Size-1);
//        }
//        bool IsEmpty(){
//            return (tos == -1);
//        }
//
//        void Push(int n){
//            if(IsFull() == false){
//                tos++;
//                Stk[tos] = n;
//            }
//            else
//                cout<<"\n Sorry, Stack is Full....!!";
//        }
//
//        int Pop(){
//            if(!IsEmpty())
//                return Stk[tos--];
//            else{
//                Exception e;
//                e.code=101;
//                e.Name="\n Sorry, Stack is Empty....!!";
//                throw e;
//            }
//        }
//
//        int Peak(){
//            if(!IsEmpty())
//                return Stk[tos];
//            else{
//                Exception e;
//                e.code=102;
//                e.Name="\n Sorry, Stack is Empty....!!";
//                throw e;
//            }
//        }
//
//
//
//        void Display() {
//            if (!IsEmpty()) {
//                cout << "Stack Contents: ";
//                for (int i = tos; i >= 0; i--) {
//                    cout << Stk[i] << "\t";
//                }
//                cout << endl;
//            } else {
//                cout << "\n Stack is Empty....!!" << endl;
//            }
//        }
//
//};
//
//
//int main() {
//
//    Stack S(5);
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
//    Stack S1(6);
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
