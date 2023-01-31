#include <iostream>
using namespace std;
char offer;
char timee;
int minutes;
main(){
cout << "Enter offer type (primium (P) / normal (N) ): ";
cin >> offer;
if(offer == 'p' || offer == 'P'){
  cout << "Enter time of offer: ";
  cin >> timee;
}

cout << "Enter minutes consumed: ";
cin >> minutes;

if((offer == 'n' || offer == 'N')){
  if(minutes <= 50){
    cout << "Charges are 10 $.";
  }
  if(minutes > 50){
    cout << "Charges are: " << 10 + (minutes - 60) * 0.20 << " $";
  }

}
if((offer == 'p' || offer == 'P')){
  if(timee == 'd' || timee == 'D'){
  if(minutes <= 75){
    cout << "Charges are 25 $.";
  }
  if(minutes > 75){
    cout << "Charges are: " << 75 + (minutes - 75) * 0.1 << " $";
  }
  }
if(timee == 'n' || timee == 'N'){
  if(minutes <= 100){
    cout << "Charges are 25 $.";
  }
  if(minutes > 100){
cout << "Charges are: " << 25 + (minutes - 100) * 0.05 << " $";
  }
}
}
  }