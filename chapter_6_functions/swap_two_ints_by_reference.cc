#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void swap_ints(int &a, int &b){
  auto temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 5;
  int b = 6;
  cout << "a = " << a << " b = " << b << endl;
  swap_ints(a, b);
  cout << "a = " << a << " b = " << b << endl;
}
