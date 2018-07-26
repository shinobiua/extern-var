#include <iostream>
using namespace std;

//I tell that int a, b, c and float f exist SOMEWHERE. It is not a declaration
//in the form that you would think of, e.g. int a;

  extern int a, b, c;
  extern float f;

//extern is used outside the main function

    int main() {

      //THIS is the actual declaration that can exist in the different file
      //or module and still be remembered by the program as the specific
      //or rather exclusive var

      int a, b, c;

      float f;

      //Once again, this can be done in another module since the system
      //is aware that int a,b,c and float f exist somewhere and have
      //specific value

      a = 10;
      b = 20;
      c = a + b;
      f= 70.0/3.0;

        cout << c << endl;
        cout << f << endl;

      return 0;

}
