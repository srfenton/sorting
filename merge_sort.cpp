#include <iostream>

void merge(int arr[], int l, int m, int r, int n){
    int i = l;
    int j = m + 1;
    int k = l;
    int temp[n];
    while(i <= m && j <= r){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];    //left subarray value is smaller
            ++i; 
            ++k;
        } else{
            temp[k] = arr[j]; //right subarray value is smaller
            ++j; 
            ++k; 
        }
    }
    while(i <= m){
        temp[k] = arr[i];
        ++i; 
        ++k;

    }
    while(j <= r){
        temp[k] = arr[j];
        ++j; 
        ++k;

    }
    for(int x = l; x <= r; ++x){
        arr[x] = temp[x];
    }
}

void merge_sort(int arr[], int l, int r, int n) {
  if(l < r) {
    int m = (l +r ) / 2;
    merge_sort(arr, l, m, n);
    merge_sort(arr, m + 1, r, n);
    merge(arr, l, m, r, n);
  }
}
void print_array(int arr[], int n){
  for(int i = 0; i < n; ++i){
    std::cout << arr[i] << std::endl;
  }
}


int main() {
  int driver_array[] = {1, 8, 6, 5, 4, 9, 9, 4, 5};
  int n = sizeof(driver_array) / sizeof(driver_array[0]);
  merge_sort(driver_array, 0, (n - 1), n);    //starting index is 0
  print_array(driver_array, n);
  return 0;
}
