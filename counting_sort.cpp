#include <iostream>
#include <algorithm>
void counting_sort(int arr[], int n) {
  int output_arr[n];
  int& r = *std::max_element(arr, arr+n);       //calculate range value
  
  int count_arr[r];                             //initialize array with the size of the max element of the input array and 0 values
  for (int i = 0; i < r; ++i) {
        count_arr[i] = 0;
    }

  for(int i = 0; i < n; ++i){
    ++count_arr[arr[i]];
  }
  
  for(int i = 1; i < r+1; ++i){
    count_arr[i] = count_arr[i] + count_arr [i - 1] ;
  }

  for(int i = 0; i < n; ++i){                 //map each value in the input array to its position in the output array
    output_arr[--count_arr[arr[i]]] = arr[i]; //decrementing the value in the count_arr each time to account for repeat values
  }
  for(int i = 0; i < n; ++i){                 //transfer output array values to the input array
    arr[i] = output_arr[i];
  }

  // for(int i = 0; i < r+1; ++i){
  //   std::cout << "for the value of: "<< i << " we have a count of " << count_arr[i] << std::endl;
  // }

}

void print_array(int arr[], int n){
  for(int i = 0; i < n; ++i){
    std::cout << arr[i] << std::endl;
  }
}


int main() {
  int driver_array[] = {1, 8, 6, 5, 4, 9, 9, 4, 5, 5, 5, 5};
  int size = sizeof(driver_array) / sizeof(driver_array[0]);
  counting_sort(driver_array, size);
  print_array(driver_array, size);
  return 0;
}
