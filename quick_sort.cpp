#include <iostream>

int partition(int arr[], int s, int e){
    int pivot = arr[e];
    int pindex = s;
    for(int i = s; i < e; ++i){
        if(arr[i] < pivot){             //move all elements less than the pivot to the left side of the array
            int tmp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = tmp; 
            ++pindex;
            }
    }
    int tmp = arr[e];                   //move the pivot value right of the left sorted values
    arr[e] = arr[pindex];
    arr[pindex] = tmp;
    return pindex;
}

void quick_sort(int arr[], int s, int e) {
if(s < e){
    int p = partition(arr, s, e);
    quick_sort(arr, s, (p - 1));
    quick_sort(arr, (p + 1), e);
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
  quick_sort(driver_array, 0, (size - 1));
  print_array(driver_array, size);
  return 0;
}
