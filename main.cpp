#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
  string first_name, last_name; // input
  string full_name;
  cout << "Enter Your Full Name:  ";
  getline(cin,full_name); 
  //cin >> first_name >> last_name;
  //full_name = first_name + " " + last_name ; 
  cout<< "Hello " <<full_name << "." <<endl; 
return 0;
}