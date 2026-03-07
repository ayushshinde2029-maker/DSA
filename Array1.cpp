#include<iostream>
using namespace std;

void printarray(int arr[], int n){

    //print array one by one

    cout<<"Array element are:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
}
int sumofarray(int a[], int n){
     int sum;
    for(int i=0; i<n; i++){
        sum=sum+a[i];
        
    }
    return sum;
}

int main(){
    // new array
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n= sizeof(arr)/sizeof(arr[0]);
    printarray(arr, n);
    cout<<endl;
    int sum = 0;
    sum = sumofarray(arr, n);
    
    cout<<"The sum of array:"<<sum;

    return 0;
}




