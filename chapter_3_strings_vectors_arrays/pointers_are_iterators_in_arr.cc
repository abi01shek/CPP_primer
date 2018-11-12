#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

// pointer relational operators cannot be used on unrelated variables. can be used only in arrays
// we can use subscripts on pointers

void pointer_iterator_arr(){
  int arr[] = {0,1,2,3,4,5,6,7,8,9};
  int *e = &arr[10];
  for (int *b = arr ; b != e;b++){
    cout << *b << endl;
  }
  cout << endl;
}

void pointer_iterator_arr_with_lib_funcs(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *beg = std::begin(arr);
    int *end = std::end(arr);
    for(int *i = beg; i != end ; i++){
      cout << *i << endl;
    }
    cout << endl;
}

void pointer_arithmetic_add(){
  int arr[] = {0,1,2,3,4,5,6,7,8,9};
  int *ip = arr;
  cout << *(ip+4) << endl;
}

void subscr_on_pointers(){
  int arr[] = {0,1,2,3,4,5,6,7,8,9};
  int *ip = arr;
  cout << ip[4] << endl; //ip is pointer to array and subscript works same
}

void exer_334(){
  int arr[] = {0,1,2,3,4,5,6,7,8,9};
  int *p1 = &arr[3]; //3
  int *p2 = &arr[2]; //2
  cout << *(p1+=p2-p1) << endl; //3-2+2 = 3
}

void set_arr_elts_zero(){
  int arr[10];
  for(int *b = std::begin(arr); b != std::end(arr); b++){
    *b=0;
  }
  for (auto i:arr)
    cout << i << " ";
  cout << endl;
}

void compare_2_arrs(){
  int arr1[] = {0,1,2,3,4,5,6,6,8,9};
  int arr2[] = {0,1,2,3,4,5,6,7,8,9};
  int match = 1;
  for (size_t i = 0; i < 10 ; i++){
    if(arr1[i] != arr2[i]){
      match = 0;
    }
  }
  cout << "Match score is " << match << endl;
}

void compare_2_vecs(){
  vector<int> arr1{1,2,3,5};
  vector<int> arr2{1,2,3,5};
  int match = 1;
  for(vector<int>::size_type it = 0; it < arr1.size(); it++){
    if(arr1[it] != arr2[it])
      match = 0;
  }
  cout << "Match score is " << match << endl;
}

int main() {
  pointer_iterator_arr();
  pointer_iterator_arr_with_lib_funcs();
  pointer_arithmetic_add();
  subscr_on_pointers();
  exer_334();

  set_arr_elts_zero();
  compare_2_arrs();

  compare_2_vecs();
}
