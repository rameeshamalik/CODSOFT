#include<iostream>
using namespace std;
//TASK 2
int main(){
	double a,b,result;
	char operation;
	cout<<"ENTER THE OPERATION (+, - ,* , \): ";
	cin>>operation;
	cout<<"ENTER FIRST NUMBER: ";
	cin>>a;
	cout<<"ENTER SECOND NUMBER: ";
	cin>>b;
	
	switch (operation) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0) {
                result = a / b;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;  
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1; 
             }

    cout << "Result: " << result << endl;

    return 0;  // Exit successfully
}
