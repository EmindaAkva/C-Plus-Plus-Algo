#include <iostream>
using namespace std;

void display(char c = '*', int count = 5) {
    cout << c;
}

int main() {

   int num_int;
   double num_double = 945454545.99;

   // implicit conversion
   // assigning a double value to an int variable
   num_int = num_double;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

   short num_short = 2;
   cout << "num_short = " << num_short << endl;
   num_short = num_int; // no exception. wrong value
   cout << "num_short = " << num_short << endl; 
   num_double = num_short;
   cout << "num_double = " << num_double << endl;

   string f= "test";
   f+=120;
   cout << "f = " << f << endl;
   display('a',2);
   return 0;
}



