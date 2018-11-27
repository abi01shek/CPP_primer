#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

// i is reference for object being passed to. (i is another name for the object being passed in)
void reset(int &i){
  i = 0;
}

int main() {
  int n = 5;
  cout << n << endl;
  reset(n); // just pass the object and that is good enough
  cout << n << endl;
  
}
