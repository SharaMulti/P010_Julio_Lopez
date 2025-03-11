/*
Amerike University
Author: Julio Lopez
Proyect #: 10
Date: 11/MAR/25
Description: Make it so that it is shown 4 different data, the user chooses one, and it shows that one individually
*/

#include <iostream>
 using namespace std;
int getRandomNumber(){

    int RandomNum = 10;

    return RandomNum;
}
char getRandomChar(){

    char RandomChar = '$';

    return RandomChar;
}
double getRandomDec(){

    double RandomDec = 0.10;

    return RandomDec;
}
string getRandomName(){

    string RandomName = "abcdeifg";

    return RandomName;
}

 int main(){

    cout << getRandomNumber();
    cout << getRandomChar();
    cout << getRandomDec();
    cout << getRandomName();

    return 0;
 }