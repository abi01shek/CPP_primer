#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void same_as_index(){
  constexpr size_t array_size = 10;
  int nums[array_size] = {};
  for (auto i : nums)
    cout << i << " ";
  cout << endl;
  for (size_t i = 0; i < array_size;i++){
    nums[i] = i;
  }
  for (auto i : nums)
    cout << i << " ";
  cout << endl;
}

void vec_not_arr(){
  vector<int> nums;
  for(int i = 0 ; i<10;i++)
    nums.push_back(i);
  for(auto it = nums.begin(); it != nums.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
}
int main() {
  same_as_index();
  vec_not_arr();
}
