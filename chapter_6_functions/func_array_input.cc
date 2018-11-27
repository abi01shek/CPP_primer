#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print(const int*){
  cout << "Hello" << endl;
}

//using standard library conventions
void print(const int *beg, const int *end){
  while(beg != end)
    cout << *beg++ << endl;
}

void print(const int* ia, size_t size){
  for(size_t i = 0; i != size ;i++)
    cout << ia[i] << endl;
}

int main() {
  int i = 10;
  int j[] = {2,3};
  print(&i);
  print(std::begin(j), std::end(j));
  print(j,std::end(j) - std::begin(j));
}
