// program to calcuate the sum and product of all the elements of array 
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the number of elements you want in array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    int prod=1;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        prod=prod*arr[i];
    }
    cout<<"sum of all numbers of array is "<<sum<<endl;
    cout<<"product of all numbers of array is "<<prod;

    return 0;
}