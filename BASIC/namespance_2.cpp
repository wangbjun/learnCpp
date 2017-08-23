#include <stdlib.h>
#include <iostream>

int getMaxOrMin(int *arr, int count, bool isMax)
{
  int temp = arr[0];
  for (int i = 1; i < count; i++) {

    if (isMax) {
      if (temp < arr[i]) {
        temp = arr[i];
      }
    }else{
      if (temp > arr[i]) {
         temp = arr[i];
      }
    }
  }
  return temp;
}

int main()
{
  int arr[5] = {1,5,3,7,4};
  std::cout << getMaxOrMin(arr, 5, true) << '\n';
  std::cin.get();
  return 0;
}
