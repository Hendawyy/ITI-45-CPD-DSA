#include <iostream>
using namespace std;

class Exception{
public:
    int code;
    string Name;
};
class Queue {
    private:
        int *Q;
        int Head, Tail, Size;
    public:
        Queue(int Size){
            this -> Size = Size;
            Q = new int[Size];
            Head = 0;
            Tail = 0;
        }
        ~Queue(){
            delete[] Q;
        }
        bool IsFull(){
            if (Head == 0 && Tail == Size) {
                return true;
            } else if (Tail == Head - 1) {
                return true;
            } else {
                return false;
            }

        }
        bool IsEmpty(){
            return (Head == 0 && Tail == 0);
        }

        void EnQueue(int n) {
            if (IsFull()) {
                cout << "Queue is Full. Cannot Enqueue " << n << endl;
            } else {
                if(IsEmpty()){
                    Q[Tail] = n;
                    Tail++;
                }else if(Tail == Size){
                    Tail = 0;
                    Q[Tail]=n;
                }else{
                    Q[Tail] = n;
                    Tail++;
                }
            }
        }

         int DeQueue() {
            if (IsEmpty()) {
                Exception e;
                e.code=101;
                e.Name="\n Queue is Empty....!!";
                throw e;
            } else {
                int temp;
                if(Head == Tail){
                    temp=Q[Head];
                    Head = Tail = 0;
                    return temp;
                }else if(Head  == Size){
                    temp=Q[Head];
                    Head = 0;
                    return temp;
                }else{
                    return Q[Head++];
                }

            }
        }

        int GetFront() {
            if (IsEmpty()) {
                Exception e;
                e.code=102;
                e.Name="\n Queue is Empty....!!";
                throw e;
            } else {
                return Q[Head];
            }
        }

        int GetRear() {
            if (IsEmpty()) {
                Exception e;
                e.code=103;
                e.Name="\n Queue is Empty....!!";
                throw e;
            } else {
                return Q[Tail-1];
            }
        }

        void Display() {
            if (!IsEmpty()) {
                if(Head <= Tail){
                    cout << "Queue Contents: ";
                    for (int i = Head; i < Tail; i++) {
                        cout << Q[i] << "\t";
                    }
                }else{
                    for (int i = Head; i <= Size; i++) {
                        cout << Q[i] << "\t";
                    }
                    for (int i = 0; i <= Tail; i++) {
                        cout << Q[i] << "\t";
                    }
                }

                cout << endl;
            } else {
                cout << "\n Queue is Empty....!!" << endl;
            }
        }

};

int main() {

    Queue Q(5);
    Q.Display();
    try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }
    try{
        cout << "GetFront: " << Q.GetFront() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }
    try{
        cout << "GetRear: " << Q.GetRear() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }

    Q.Display();
    Q.EnQueue(10);
    Q.EnQueue(20);
    Q.EnQueue(30);
    Q.EnQueue(40);
    Q.EnQueue(50);
    Q.Display();
    Q.EnQueue(60);
    try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }
    try{
        cout << "GetFront: " << Q.GetFront() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }
    try{
        cout << "GetRear: " << Q.GetRear() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }

    Q.EnQueue(70);
    Q.EnQueue(80);
    try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }
    Q.Display();
    try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }try{
        cout << "DeQueue: " << Q.DeQueue() << endl;
    }catch(Exception e){
        cout<<"ErrorCode: "<< e.code <<" Queue is Empty "<<endl;
    }
     Q.EnQueue(70);
    Q.EnQueue(80);
    Q.Display();
    return 0;
}
