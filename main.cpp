#include <iostream>


// static_cast<what you wanna convert to>(variable you wanna convert)
int main()
{


using std::cout;
using std::cin;
using std::endl;
using std::string;
    
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

// float temp{0};

//   cout << "Please enter your body temperature: " << endl;
//   cin >> temp;

//   if (temp <= 98.6) {
//       cout << "You are okay to go to school\n";
//   } else if (temp >= 98.6 && temp <=100.1) {
//       cout << "You might be coming down with something, drink alot of fluids\n";
//   } else if (temp > 100.1) {
//       cout << "Omg you are not feeling well!\n";
//   }


  // ************************* example D ******************

  
//   #include <iostream>
//   #include <cstdlib>

//   using std::cout;
//   using std::cin;
//   using std::endl;

//   int main() {

//   int rannum{0};
//   int count{0};
//   int av{0};



//   while (count <=1000){

//   count ++; 

//   srand(time(0));
//   rannum = (rand() % 6)+1;
//   av = av + rannum;
//   }

//   av = av/count;

//   cout << av;
//   }




// ************************************************************ example E ********************************


  // #include <iostream>
  // #include <cstdlib>

  // using std::cout;
  // using std::cin;
  // using std::endl;

  // int main() {

  // int tempF{0};
  // int tempC{0};

  // cout << "What is the temp in Fahrenheit? ";
  // cin >> tempF;

  // tempC=5*(tempF-32)/9;


  // cout << "This is the temp in Celcius: " <<tempC<<endl;

  // }
//**************************************************************


// int i = 1;
//   while (i <= 10)
//     {
//       if (i<5 && i!=2)
//         cout << "x";
//       i++; 
//     }




//   turns to this

//     int i = 1;
//     for (i = 1; i <= 10; i++)
//     {
//         if (i < 5 && i != 2)
//         {
//             cout << "x";
//         }
//     }
//     }
  //**************************** exmaple I *******


// int main() {

// int debt{0};
// int doubled{0};
// int year{0};


//    cout << "Enter the amount of debt you have: ";
//    cin >> debt;
   
//    doubled = debt * 2;
   
//    while (debt <= doubled ) {
//        debt = debt + 0.02*debt;
//        year ++;
//    }
   
//    cout << "It will take " << year << " years for the debt to double ($" << doubled <<"). ";
   
   
   
   
   
// }

// ********************* example K *************
// int main() {

// int input{0};
// double counter{1};
// double fraction {0};

// cout << "Enter a denominator: ";
// cin >> input;

// while (counter <= input) {
//     fraction = fraction + (1/counter); 
//     counter ++;
    
    
// }

// cout << fraction;




// ************* exmaple from power point 1 *************

//   int main() {

//   int input {0};
//   int zero{0};
//   int math{0};

//   cout << "Enter a number: ";
//   cin >> input;


//   cout << "This is the list of all multiples of 3: \n"; 

//   while (input >= zero) {

//       if (input%3 == 0) {
//           cout << input << endl;
//       }
//    input = input -1;

//   }


  
// }


 // ********* exmaple 2 from power point *****************

  // #include <iostream>
  // using namespace std;
  // int main(){
  // // declare and initialize variables
  // int number = 0, i;
  // // prompt user to input
  // cout << "Please enter an integer: ";
  // cin >> number;
  // // enter loop
  // for (i = 1; i < number; i *= 2){
  // cout << i << " ";
  // }
  // cout << i;
  // }



  // ***** problem G *********


//   for (int i = 1; i <=10; i++) {
//     if (i < 5 && i != 2) {
//       cout << 'x';
//     }

// } 

// *****************
  
  // Coffee Cart: Write a program that uses a while loop to manage
  // orders for a coffee cart. A customer can buy coffee or tea from the
  // cart. The cart will start with an inventory of coffees and an inventory
  // of teas (integer values of your choice). As customers place orders,
  // the number of coffees and teas in inventory will be reduced. As long
  // as there is coffee or tea inventory remaining, the cart can stay in
  // business. When the cart runs out of both coffee and tea, they will
  // close for the day.



// int inventory{0};
// int tea{0};
// int coffee{0};
// string input;

//   cout << "How many teas does the cart have? ";
//   cin >> tea;
//   cout << "How many coffees does the cart have? ";
//   cin >> coffee;


//   inventory = tea + coffee;

//   while (inventory > 0) {

//     cout << "Hello Customer, what would you like? ";
//     cin >> input;
  
  
  // if (input == "T" && tea == 0) {
  //   cout << "oh my, sorry we don't have any tea left. ";
  // } else if (input == "t" && tea == 0) {
  //   cout << "oh my, sorry we don't have any tea left. ";
  // } else if (input == "T" || input == "t") {
  //     cout << "Thank you for your purchase. You have been given one tea.";
  //       inventory--;
  //       tea--;
  //   } else if (input == "C" || input == "c") {
  //     cout << "Thank you for your purchase. You have been given one coffee.";
  //     inventory--;
  //     coffee--;
  //   }

    
    
  // }

  

  // Write a for loop
  // that calculates the lowest
  // power of 2 that is larger than a
  // number entered by the user.


int number;

  cout << "Please enter a number ";
  cin >> number;

  
  





}