#include <iostream>
using namespace std;
int main(){
 int arr[7]={12,86,-24,56,77,19,7};
 //to find the smallest and lagest element in the array 
 int smallest= INT_MAX;
 int largest=INT_MIN;
//  for(int i=0;i<7;i++){
//     if(arr[i]<smallest){
//         smallest=arr[i];
//     }
//  }
//  cout<<"smallest element is "<<smallest;
  for(int i=0;i<7;i++){
    smallest=min(arr[i],smallest);//min is inbuilt function which will return the min value
    largest=max(arr[i],largest);
  }
  
//   for(int i=0;i<7;i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
//  }

 cout<<"largest element is "<<largest<<endl;
 cout<<"smallest element is "<<smallest;
 return 0;
}