// Author: Dante Cherubini
// Date: 08/28/2018

#include "pch.h"
#include <iostream>
using namespace std;

int sumOfPositives(int n) {
	int ceiling = n;
	int total = 0;
	for (int i = 1; i <= ceiling; i++) {
		total += i;
	}
	return total;
}

int main()
{
	int n = 0;
	cout << "Enter a positive integer: ";
	cin >> n;
	while (n <= 0) {
		cout << "Please enter a number greater than zero: ";
		cin >> n;
	}
	cout << "The sum of integers from 1 to " << n << " is " << sumOfPositives(n) << "." << endl;
}