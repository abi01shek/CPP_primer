#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::all_of;
using std::string;

bool containsCapital(const string &s){
  return (all_of(s.begin(), s.end(), isupper));
}

void convertToLower(string &s){
  std::transform(s.begin(), s.end(), s.begin(), ::tolower);
}
//parameters dont have the same type because for containscapital we dont need to modify the input parameter string so  it is defined as const this is important
//for converttolower we need to modify the string and so const is removed
// if we dont define const string in containscapital we cannot use it in the format below on constant strings literals 
int main() {
  cout << containsCapital("ABV") << endl;
  string s = "aBc";
  convertToLower(s);
  cout << s << endl;
}
