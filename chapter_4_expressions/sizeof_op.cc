#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void size_of_builtin(){
  cout << "Int " << sizeof(int) << endl;
  cout << "double " << sizeof(double) << endl;
  cout << "long " << sizeof(long) << endl;
  cout << "Unsigned Int " << sizeof(unsigned int) << endl;
  cout << "char " << sizeof(char) << endl;
  cout << "String " << sizeof(string) << endl;
}

void sizeof_2(){
  int x[10];
  int *p = x;
  cout << sizeof(x)/sizeof(*x) <<  endl;
  cout << sizeof(p)/sizeof(*p) <<  endl;
}

int main() {
  size_of_builtin();
  sizeof_2();
}
