#include <iostream>
using namespace std;
int hourr;
int hours, minute, minutes;
void hour();
main(){
    cout << "Enter hours of starting time of exam: ";
    cin >> hourr;
    cout << "Enter minutes of starting time of exam: ";
    cin >> minute;
    cout << "Enter arrival time hour of student: ";
    cin >> hours;
    cout << "Enter minutes of arrival of student: ";
    cin >> minutes;
    hour();
}
void hour(){
    int totalmint;
    int totalhour;
if(minute > minutes){
totalmint = minute - minutes;
if(hourr >= hours){
if (totalmint >= 30){
    cout << "Reached earlier: " << totalmint << " minutes minutes before exam starting.";
}
if (totalmint < 30){
    cout << "Reached at time: " << totalmint << " minutes before exam starting.";
}
}
if(hourr < hours){
    if(totalmint >= 60){
     totalhour = totalmint / 60;
    cout << "Late: " << totalhour << " hours " << totalmint << " minutes after exam starting.";
    }
}
if(minute < minutes){
    totalmint = minutes - minute;
    if(hourr == hours){
        
    cout << "Late: " << totalmint << " minutes after exam starting.";
    }
    if(hourr < hours){
    if(totalmint >= 60){
     totalhour = totalmint / 60;
    cout << "Late: " << totalhour << " hours " << totalmint << " minutes after exam starting.";
    }
}
}
}
}