#include <iostream>

template <typename T>
void selectionSort(T* arr, int size) 
{
  for (int i = 0; i < size - 1; i++) 
  {
    int minIndex = i;
    for (int j = i + 1; j < size; j++) 
    {
      if (arr[j] < arr[minIndex]) 
      {
        minIndex = j;
      }
    }
    std::swap(arr[i], arr[minIndex]);
  }
}

int main() {
  //by Aman Jakir Patel
  
  // Sort an integer array
  int arr1[] = {5, 2, 4, 1, 3};
  int size1 = 5;
  selectionSort(arr1, size1);

  std::cout << "Sorted integer array: ";
  for (int i = 0; i < size1; i++) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  // Sort a float array
  float arr2[] = {5.3, 2.1, 4.2, 1.6, 3.9};
  int size2 = 5;
  selectionSort(arr2, size2);

  std::cout << "Sorted float array: ";
  for (int i = 0; i < size2; i++) {
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
