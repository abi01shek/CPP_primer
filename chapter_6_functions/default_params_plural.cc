#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

string make_plural(const string &s1, const string& ending ="s"){
  string s2 = s1 + ending;
  return s2;
}

int main() {
  auto s2 = make_plural("abc","d");
  cout << s2 << endl;
  
}
