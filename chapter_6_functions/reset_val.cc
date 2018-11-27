#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void reset(int *ip){
  *ip = 0; //changes the value of the object pointed to
  ip = 0;
}

int main() {
  int n = 42;
  cout << n << endl;
  reset(&n);
  cout << n << endl;
}
