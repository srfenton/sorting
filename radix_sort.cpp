#include <iostream>

void counting_sort(it arr[], )

void radix_sort(int arr[], ) {

}

void print_array(int arr[], int n){
  for(int i = 0; i < n; ++i){
    std::cout << arr[i] << std::endl;
  }
}  

int main() {
  int driver_array[] = {1, 8, 6, 5, 4, 9, 9, 4, 5};
  int size = sizeof(driver_array) / sizeof(driver_array[0]);
  radix_sort(driver_array, size);
  print_array(driver_array, size);
  return 0;
}
