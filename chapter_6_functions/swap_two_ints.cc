#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void swap(int *a, int *b){
  auto temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 5;
  int b = 6;
  cout << "a = " << a << " b = " << b << endl;
  swap(&a, &b);
  cout << "a = " << a << " b = " << b << endl;
}
