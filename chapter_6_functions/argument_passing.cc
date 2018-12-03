#include<iostream>
#include<vector>
#include<string>
#include<initializer_list>


using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::initializer_list;

void error_msg(initializer_list<string>);
int total_sum(initializer_list<int>);

int main(int argc, char *argv[]) {
  for(int i = 0; i < argc ; i++){
    cout << argv[i] << endl;
  }
  string ret = "";
  for(int i = 1; i < argc ; i++){
    ret = ret + argv[i];
  }
  cout << ret << endl;

  error_msg({"functionX","abc","def"});
  error_msg({"functionY","def"});

  cout << total_sum({1,2,3,4,5}) << endl;
  cout << total_sum({2,3})<< endl;
}


void error_msg(initializer_list<string> il){
  for(auto beg = il.begin(); beg != il.end(); ++beg){
    cout << *beg <<" ";
  }
  cout << endl;
}

int total_sum(initializer_list<int> il){
  int sum = 0;
  for ( const auto &elem : il){
    sum = sum + elem;
  }
  return sum;
}
