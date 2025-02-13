#include <iostream>
using namespace std;
void changearr(int arr[],int size){
    cout<<"in changearr function\n";
    for(int i=0;i<size;i++){
    arr[i]=arr[i]*2;//we made changes here and it will reflect in the main functon also
  }
}
int main(){
int arr[]={1,2,3};
  changearr(arr,3);
  cout<<"in main function"<<endl;
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";   //here we will get the updated valued of the arr from changearr
  }
    return 0;
}