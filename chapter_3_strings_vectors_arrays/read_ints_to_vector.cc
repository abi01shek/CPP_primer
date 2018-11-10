#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  vector<int> int_vector;
  int input_int;
  while(cin >> input_int)
    int_vector.push_back(input_int);
  cout << int_vector[0] << endl;
  return 0;
}
