#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int seq_num (){
  static int i = 0;
  return i++;
}

int main() {
  for(size_t i = 0; i < 10 ; i++){
    cout << seq_num() << endl;
  }
  return 0;
}
