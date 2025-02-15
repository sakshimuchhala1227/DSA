#include<iostream>
using namespace std;
int main (){
    int arr[]={67,32,-12,6,8,-25,7};
    int size=sizeof(arr)/4;
    int min_index=0;
    for(int i=1;i<size;i++){
        if(arr[i]<arr[min_index]){
            min_index=i;
        }
    }
    cout<<"smallest element in the array is at index "<<min_index;
    return 0;
}