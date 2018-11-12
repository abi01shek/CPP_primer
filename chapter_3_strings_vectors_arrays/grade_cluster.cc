#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  //vector<unsigned> scores(11,0); //11 buckets initial 0
  unsigned scores[11] = {};
  unsigned grade;
  while(cin >> grade){
    // auto it = scores.begin();
    // cout << "iterator index " << grade/10 << endl;
    // it += grade/10;
    // *it = *it + 1;
    ++scores[grade/10];
    cout << "index " << grade/10 << " value " << scores[grade/10] << endl;
  }
  // for(auto it = scores.begin(); it != scores.end();it++){
  //   cout << "Score for " << " is " << *it << endl; 
  // }
}
