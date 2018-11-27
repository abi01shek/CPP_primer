#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

string::size_type find_char(const string &s, char c, string::size_type &occurs){
  auto ret = s.size();
  occurs = 0;
  for(decltype(ret) i = 0; i != s.size(); i++){
    if(s[i] == c){
      if(ret == s.size())
	ret = i; //store the first occurance
      occurs++;
    }
  }
  return ret;
}

int main() {
  string s1 = "abcdcddccc";
  string::size_type fo;
  string::size_type occurs = 0;
  fo = find_char(s1, 'c', occurs);
  cout << "Found at " << fo << endl;
  cout << "Number of occurances " << occurs << endl;
}
