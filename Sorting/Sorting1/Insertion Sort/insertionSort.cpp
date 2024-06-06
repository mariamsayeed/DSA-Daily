#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
  for(int i =0; i <= n-1; i++){
    int j = i;
    while(j > 0 && arr[j] < arr[j-1]){
      swap(arr[j], arr[j-1]);
      j--;
    }

  }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}