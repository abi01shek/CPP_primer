#ifndef person_class_h
#define person_class_h

#include<string>

using std::string;

struct Person{
  //functions
  string get_name()const{return this->name;}
  string get_address()const{return this->address;}
  //data members
  string name;
  string address;
};
#endif
