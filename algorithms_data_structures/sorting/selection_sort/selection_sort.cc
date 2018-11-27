#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void selectionSort(int *input, size_t n){
  for(size_t i=0;i<n-1;i++){
    int indexOfSmallest = i;
    for(size_t j=i+1;j<n;j++){
      if(input[i] < input[indexOfSmallest]){
	indexOfSmallest = j;
      }
    }
    //swap
    int temp = input[i];
    input[i] = input[indexOfSmallest];
    input[indexOfSmallest] = temp;
  }
}

int main() {
  int input[] = {1,5,3,7,8};
  size_t n = sizeof(input)/sizeof(int);
  selectionSort(&input[0], n);
  for(size_t i =0 ; i < n;i++){
    cout << input[i] << endl;
  }
  return 0;
}
