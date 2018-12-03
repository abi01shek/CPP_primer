#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

string return_this(){
  return "Empty";
}
int main() {

  string s1;
  s1 = return_this();
  cout << s1 << endl;
}
