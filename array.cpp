#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the array  size " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array " << endl;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    // increase by ascending order

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=0;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout << "The Ascended array elements are : " << endl;
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}