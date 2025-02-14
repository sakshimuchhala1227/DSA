#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,5,6};
    int size=sizeof(arr)/4;
    int start = 0;
    int end=size-1;
    cout<<"original array is "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(start <end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reverse array is "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}