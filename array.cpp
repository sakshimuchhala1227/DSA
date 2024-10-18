#include <iostream>
using namespace std ;
int main(){
 int arr[5]={12,20,30,34,22};
 cout<<arr[2]<<endl;
 int size=sizeof(arr)/4;//size of return the total size of array that is 20
 cout<<"size of array is "<<size<<endl;
 int marks[size];
 for (int i=0;i<size;i++){
    cout<<"enter the elements in array ";
    cin>>marks[i];
}
 for(int i=0;i<size;i++){
    cout<<"arr elements are "<<arr[i]<<endl;
    cout<<"marks elements are "<<marks[i]<<endl;
 }
 return 0 ;
}
