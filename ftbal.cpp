#include <iostream>
using namespace std;
int fans;
float budget;
float result();
string type;
float amount;
float needed;

main(){
   cout << "Enter amount of budget: ";
   cin >> budget;
   cout << "Enter type of ticket(VIP / Normal): ";
   cin >> type;
   cout << "Enter number of fans of footbal: ";
   cin >> fans;

   result();
   cout << amount;
}
float result(){
  if(fans <= 4 && type == "VIP"){
   needed = 0.75 * budget + fans * 499.99;
}
if(needed < budget){
     amount = budget - needed;
}
if(needed > budget){
     amount = needed - budget;
}

return amount;
}