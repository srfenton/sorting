#include <iostream>
#include <deque>

void selection_sort(int arr[], int n) {
  std::deque<int> sorted_array;
  // std::deque<int>().swap(sorted_array);
  int min = arr[0];
  for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(arr[j]< arr[i]){
        min = arr[j];
      }
    sorted_array.push_front(min);
    }    
  }
  for(int n : sorted_array)
        std::cout << n << ' ';
  } 

void print_array(int arr[], int n){
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << std::endl;
  }
}


int main() {
  int driver_array[] = {1, 8, 6, 5, 4, 9, 9, 4, 5};
  int size = sizeof(driver_array) / sizeof(driver_array[0]);
  selection_sort(driver_array, size);
  // print_array(driver_array, size);
  return 0;
}
