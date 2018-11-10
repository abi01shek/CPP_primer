#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
  vector<string> s1 = {"abc", "ef", "ghijd"};
  for(vector<string>::size_type ix = 0; ix < s1.size();ix++){
    cout << s1[ix].size() << endl;
  }
  return 0;
}
