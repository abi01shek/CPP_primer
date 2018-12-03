#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int larger_of_two(int a, int *b){
  int ret;
  if(a > *b){
    ret = a;
  }
  else{
    ret = *b;
  }
  return ret;
}

void swap(int *p1, int *p2){
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

void print(const int a){
  cout << a << endl;
}

void print (const int *a, size_t size){
  for(size_t i =0; i!= size; i++){
    cout << a[i] << endl;
  }
}

int main() {
  int a = 5;
  int b = 6;
  int *p = &b;
  int larger = larger_of_two(a, p);
  cout << larger << endl;

  cout << "Swap" << endl;
  int c = 7;
  int d = 8;
  int *p1 = &c;
  int *p2 = &d;
  cout << c << " " << d << endl;
  swap(p1, p2);
  cout << c << " " << d << endl;

  cout << "print" << endl;
  int i = 0;
  int j[2] = {0,1};
  print(i);
  print(j, 2);
  
}
