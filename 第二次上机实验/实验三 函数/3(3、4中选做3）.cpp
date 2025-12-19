#include<iostream>
#include<iomanip>
#include"3.h"
using namespace std;
int main() {
	double c1, c2, c3, f1, f2, f3;
	cin >> c1 >> c2 >> c3 >> f1 >> f2 >> f3;
	cout << left << setw(14) << "Celsius" << left << setw(14) << "Fahrenheit" << setw(4) <<"|"  <<left << setw(14) << " Fahrenheit"  << setw(14) << "Celsius"<<endl;
	cout << left << setw(14) << c1 << left << setw(14) << celsius_to_fah(c1) << setw(4) << "|" << left << setw(14) << f1 << setw(14) << fahrenheit_to_cels(f1)<<endl;
	cout << left << setw(14) << c2 << left << setw(14) << celsius_to_fah(c2) << setw(4) << "|" << left << setw(14) << f2 << setw(14) << fahrenheit_to_cels(f2) << endl;
	cout << left << setw(14) << "......" << left << setw(14) << "......" << setw(4) << "|" << left << setw(14) << "......" << setw(14) << "......" << endl;
	cout << left << setw(14) << c3 << left << setw(14) << celsius_to_fah(c3) << setw(4) << "|" << left << setw(14) << f3 << setw(14) << fahrenheit_to_cels(f3) << endl;
	return 0;
}