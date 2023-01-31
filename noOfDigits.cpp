#include <iostream>
using namespace std;
int digitChecker();
int number;
  int result;
main(){

    cout << "Enter a number: ";
    cin >> number;
    
    result = digitChecker();
      cout << result;
     }
   int digitChecker(){
       int dig = 0;
       if(number == 0){
    result = 1;
    }
   while(number != 0){
      
      number = number / 10;
result = result + 1;
     }
      return result;
     }