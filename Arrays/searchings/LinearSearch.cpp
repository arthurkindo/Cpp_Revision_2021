#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int size, key, index;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Items for the array : "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the Item to be search : "<<endl;
    cin>>key;
    index = linearSearch(arr, size, key);
    if(index == -1){
        cout<<"Sorry Item not found in the array!!!"<<endl;

    }
    else {
        cout<<"Item found at Index : "<<index<<", position : "<<index+1<<endl;
    }
    return 0;
}