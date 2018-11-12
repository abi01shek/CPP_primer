#include<iostream>
#include<vector>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


void incorrect_string_wo_null(){
  char ca[] = {'C','+','+'}; 
  cout << strlen(ca) << endl; //dont do this this is wrong because char array is not null terminated
}

void ex_337(){
  const char ca[] = {'h','e','l','l','o'};
  const char *cp = ca;
  while(*cp){
    cout << *cp << endl;
    ++cp;
  }
}

int main() {
  incorrect_string_wo_null();
  ex_337();
}
