//#include <iostream>
//#include "DoubleLinkedList.h"
//
//using namespace std;
//
//void Swap(int &a,int &b){
//    int temp = a;
//    a=b;
//    b=temp;
//}
//void PrintArr(int* arr, int n){
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}
//
/////Question 1 Liner Search
//void LinearSeach(){
//    int n;
//    cout<<"Please Input The Size Of The Array: ";
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cout<<"Please Input Element No ["<<i+1<<"] Of The Array: ";
//        cin>>arr[i];
//    }
//    int x;
//    cout<<"Please Input The Number You Want To Search For Inside The Array: ";
//    cin>>x;
//
//    bool found = false;
//    for(int i=0;i<n;i++){
//        if(arr[i]==x){
//            cout<<x<<" is Found At Index : "<< i<<endl;
//            found = true;
//        }
//    }
//    if(!found){
//        cout<<x<<" is not Found in Given Array."<<endl;
//    }
//}
//
/////Question 2 Binary Search Iterative Method
//void BinarySearch(){
//    int n;
//    cout<<"Please Input The Size Of The Array: ";
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cout<<"Please Input Element No ["<<i+1<<"] Of The Array: ";
//        cin>>arr[i];
//    }
//    int low=0;
//    int high=n-1;
//    int x;
//    int c=0;
//    cout<<"Please Input The Number You Want To Search For Inside The Array: ";
//    cin>>x;
//
//    bool found = false;
//    while(low <= high){
//        cout<<"Iterations: "<<c<<endl;
//        c++;
//        int mid = (low+high)/2;
//        if(arr[mid]==x){
//            cout<<x<<" is Found At Index : "<< mid<<endl;
//            found = true;
//            break;
//        }else{
//            if(x > arr[mid]){
//                low = mid+1;
//
//            }else if(x < arr[mid]){
//                high = mid-1;
//            }
//        }
//    }
//    if(!found){
//        cout<<x<<" is not Found in Given Array."<<endl;
//    }
//
//}
//void BubbleSortt(){
//    int n;
//    cout<<"Please Input The Size Of The Array: ";
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cout<<"Please Input Element No ["<<i+1<<"] Of The Array: ";
//        cin>>arr[i];
//    }
//    PrintArr(arr,n);
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n-i-1;j++){
//            if(arr[j]>arr[j+1]){
//                Swap(arr[j],arr[j+1]);
//            }
//        }
//    }
//    PrintArr(arr,n);
//}
//
//
//int main()
//{
//    //LinearSeach();
//    //BinarySearch();
//    return 0;
//}
