#include <iostream>

void selection_sort(int arr[], int n) {
  for(int i = 0; i < n - 1; ++i) {
    int min = i;
    for(int j = i+1; j < n ; ++j) {
      if(arr[j]< arr[min]) {
        min = j;
      } 
    }   
    if(min != i) {
      int tmp = arr[i];
      arr[i] = arr[min];
      arr[min] = tmp; 
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
  selection_sort(driver_array, size);
  print_array(driver_array, size);
  return 0;
}
