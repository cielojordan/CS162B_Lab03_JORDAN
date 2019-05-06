#include "CS162B_Lab03_JORDAN.hpp"
#include <iostream>

using namespace std;

int main() {
	int function;
	int counter = 0;
	while (function != 7) {
		cout << "\n 1.Empty  2.Size  3.Top  4.Push  5.Pop  6.Print Stack  7.Exit\n";
		cin >> function;
		switch (function) {
			case 1: if( empty()) {
						cout << "The stack is empty.";
						break;
					} 
					cout << "The stack is not empty.";
					break;
			case 2: size(counter);
					break;
			case 3: top();
					break;
			case 4: cout << "Enter number:";
					cin >> function;
					push(function, counter++);
					break;
			case 5: pop();
					break;
			case 6: IntStack();
					break;
			case 7: cout << "Exiting Stack.";
					break;
		}	
	}

return 0;
}
