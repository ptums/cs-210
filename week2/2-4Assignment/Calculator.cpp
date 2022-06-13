/*
 * Calculator.cpp
 *
 *  Date: July...
 *  Author: Peter F. Tumulty
 **/

#include <iostream>

using namespace std;

int main()
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer='y';
	while (answer =='y')
	{
		cout << "Enter expression" << endl;
		cin >> op2 >> operation >> op1;
		if (operation == '+') {
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
    }
		if (operation == '-'){
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
    }
		if (operation == '*'){
			cout << op1 << " / " << op2 << " = " << op1 * op2 << endl;
    }
		if (operation == '/') {
			cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;
    }
		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
}


