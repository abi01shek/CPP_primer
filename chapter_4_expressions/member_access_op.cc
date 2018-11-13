#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void str_size(){
  string s1 = "a string";
  string *p = &s1;
  cout << s1.size() << endl;
  cout << (*p).size() << endl;
  cout << p->size() << endl;
}

int main() {
  str_size();
  
}
