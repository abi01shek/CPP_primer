#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

struct Sales_data{
  //new members:operations on sales_data object
  string isbn() const {return this->bookNo;}
  Sales_data& combine(const Sales_data&);
  double avg_price() const;
  //data members
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

//non member sales_data interface function
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, const Sales_data&);


//scope operator 
double Sales_data::avg_price() const{
  if(units_sold)
    return revenue/units_sold;
  else
    return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

int main() {
  Sales_data total;
  if(cin >> total.bookNo >> total.units_sold >> total.revenue){
    Sales_data trans;
    while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
      if(total.bookNo == trans.bookNo){
	total.combine(trans);
      }
      else{
	cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
      }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
  }
  else{
    std::cerr << "No data?!" << endl;
    return -1;
  }
  return 0;
}
