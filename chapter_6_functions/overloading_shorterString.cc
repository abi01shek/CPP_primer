#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

const string &shorterString(const string &s1, const string &s2){
  return s1.size() <= s2.size() ? s1 : s2;
}

string &shorterString(string &s1, string &s2){
  auto &r = shorterString(const_cast<const string&>(s1),
			  const_cast<const string&>(s2));
  return const_cast<string &>(r); //safe to cast to const because original s1, s2 are references to non-const variables
}

int main() {
  string a = "abc";
  string b = "defg";
  auto c = shorterString(a, b);
  cout << c<< endl;
}
