#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void double_odd(){
  vector<int> num = {1,2,3,4,5,6,7,8,9};
  for(auto it = num.begin(); it != num.end(); it++){
    int mult_factor = ((*it)%2==0) ? 1 : 2;
    *it = *it * mult_factor;
    cout << *it << " ";
  }
  cout << endl;
}

void grade_pf(){
  int grade = 30;
  string stat = (grade > 90) ? "high pass" : (grade > 60 && grade < 75) ? "low pass" : (grade < 60) ? "fail" : "pass";
  cout << "Grade " <<  grade << " is " << stat << endl;
}

int main() {
  double_odd();
  grade_pf(); 
}
