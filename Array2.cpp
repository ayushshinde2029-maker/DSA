#include<iostream>
using namespace std;

void printarray(int arr[], int n){

    cout<<"Array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int sumofarray(int a[], int n){

    int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum + a[i];
    }

    return sum;
}

int maxElement(int a[], int n){

    int max = a[0];

    for(int i=0; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }

    return max;
}

int minelement(int a[], int n){
    int min = a[0];

    for(int i=0; i<n; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    return min;
}

float findavg(int a[], int n){
    float sum=0;
    for(int i=0; i<n; i++){
        sum = sum + a[i];
    }

    float avg;
    avg=sum/n;
    return  avg;

}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(arr)/sizeof(arr[0]);

    printarray(arr,n);
    cout<<endl;

    cout<<"Size of array is:"<<n<<endl;

    int sum = sumofarray(arr,n);
    cout<<"The sum of array: "<<sum<<endl;

    int max1 = maxElement(arr,n);
    cout<<"Max element is "<<max1<<endl;

    int min = minelement(arr,n);
    cout<<"Min element is "<<min<<endl;

    float avg = findavg(arr, n);
    cout<<"Average is:"<<avg<<endl;

    return 0;
}