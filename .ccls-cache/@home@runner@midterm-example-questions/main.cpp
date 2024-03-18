#include <iostream>

int main()
{


using std::cout;
using std::cin;
using std::endl;
    
//     int x{10};
//      while (x>0) {
//          cout << x << endl;
//          x=x+3;
//      }

   // *********************** example B ********************************

  // int main() {

  //  int n{1};

  //  while(n<=20){
  //      cout << n << endl;
  //      n++;
  //  }
  // }


  // ***************************** exmaple c **********************************

float temp{0};

  cout << "Please enter your body temperature: " << endl;
  cin >> temp;

  if (temp <= 98.6) {
      cout << "You are okay to go to school\n";
  } else if (temp >= 98.6 && temp <=100.1) {
      cout << "You might be coming down with something, drink alot of fluids\n";
  } else if (temp > 100.1) {
      cout << "Omg you are not feeling well!\n";
  }


  

  

  
}