#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

double calc (double d){
  d = d*2.0;
  return d;
}

int main() {
  double d = 66;
  cout << calc(66) << endl;
  cout << d << endl;
  
  
}
