#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout << "Input a three-digit number (100 - 999):" << endl;
    cin >> num;
    
    //Reverse of the number
    int tempnum = num;
    int lastdigit = tempnum % 10;
    num /= 10;
    int seconddigit = tempnum % 10;
    num /= 10;
    int firstdigit = tempnum;
    int reverse = lastdigit*100 + seconddigit*10 + firstdigit;
    cout << "The reverse of the number is " << reverse << "." << endl;
    

    
    //Triple the number
    int triple;
    triple = tempnum*3;
    cout << "The triple of the number is " << triple << "." << endl;
    
    return 0;
}
