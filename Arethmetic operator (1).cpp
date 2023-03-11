#include <iostream>
using namespace std;

int main(){
	int a,b,sum;
	cout << "enter the value of a: ";
	cin >> a ;
	cout << "\nenter the value of b: ";
	cin >> b;
	sum=a;
	int substruction=a-b;
	int multiplication=a*b;
	int division=a/b;
	int reminder=a%b;
	cout << "\nthe value of a+b is: " << sum;
	cout << "\nthe value of a-b is: " << substruction;
	cout << "\nthe value of a*b is: " << multiplication;
	cout << "\nthe value of a/b is: " << division;
	cout << "\nthe value of a%b is: " << reminder;
	cout << "\nthe value of a++ is: " << a++;
	cout << "\nthe value of ++a is: " << ++a;
	cout << "\nthe value of b++ is: " << b++;
    cout << "\nthe value of ++b is: " << ++b;
    cout << "\nthe value of a--is: " << a--;
    cout << "\nthe value of --a is: " << --a;
    cout << "\nthe value of b-- is: " << b--;
    cout << "\nthe value of --b is: " << --b; 
	 return 0;
	
}
