#include <iostream>
using namespace std;
int number;
int digitNo();
int digit;
main(){
cout << "Enter number: ";
cin >> number;

digitNo();
cout << digit;
}
int digitNo(){

    
   int x;
   for(x = number % 10; x != 0; x = number % 10){
  
   number = number / 10;
   x = number % 10;
   
   
   digit = digit + 1;

}

return digit;
}