#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

//reference parameters that are not changed insode a function should be references to const
bool isShorter(const string &s1, const string &s2){
  return s1.size() < s2.size();
}

int main() {
  string n1 = "abc";
  string n2 = "defg";
  cout << isShorter(n1, n2) << endl;
  
}
