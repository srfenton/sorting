#include <iostream>

void insertion_sort(int arr[], int n) {
  for(int i = 1; i < n; ++i) {
      int j = i;
      while(j > 0 && arr[j-1] > arr[j]) {
        int tmp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = tmp; 
        j = j-1;
    }
  }
}

void print_array(int arr[], int n){
  for(int i = 0; i < n; ++i){
    std::cout << arr[i] << std::endl;
  }
}


int main() {
  int driver_array[] = {1, 8, 6, 5, 4, 9, 9, 4, 5};
  int size = sizeof(driver_array) / sizeof(driver_array[0]);
  insertion_sort(driver_array, size);
  print_array(driver_array, size);
  return 0;
}
