#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int fact(int val){
  int ret = 1;
  while(val > 1){
    ret *= val--;
  }
  return ret;
}

int main() {
  cout << fact(5) << endl;
}
