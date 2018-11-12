#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  unsigned scores[11] = {};
  unsigned grade;
  while(cin >> grade){
    ++scores[grade/10];
  }
  for (auto i : scores)
    cout << i << " "; // actually prints scores value i is not the index here
  cout << endl;
  
}
