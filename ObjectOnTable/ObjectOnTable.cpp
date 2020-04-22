#include <iostream>
#include <string>
#include "ManageObject.h"
using namespace std;
int menu();
int actionTaken(int nr, ManageObject obj);
int main(){

	menu();

	return 0;
}

int menu() {

	int len, weig, choice=-1;

	cout << "create your table!" << endl;
	cout << "add length and weight" << endl;

	cout << "inter the length: ";
	cin >> len;
	cout << "now enter the weight: ";
	cin >> weig;

	ManageObject objectOnTable = ManageObject(len, weig);
	objectOnTable.printMatrix();

	while (choice != 0)
	{
		cout << "moveForward: " << 1 << endl;
		cout << "moveBackward: " << 2 << endl;
		cout << "rotate 90 degrees clockwize: " << 3 << endl;
		cout << "rotate 90 degrees CounterClockwize: " << 4 << endl;
		cout << "show the object on Table: " << 5 << endl;
		cout << "shutdown: " << 0 << endl;

		cout << "Your choice?" << ": ";
		cin >> choice;
		cout << choice << endl;
		
		switch (choice) {
		case 1:
			cout << "forward";
			objectOnTable.moveObjectForward();
			break;
		case 2:
			objectOnTable.moveObjectBackward();
			break;
		case 3:
			objectOnTable.rotateObject(90);
			break;
		case 4:
			 objectOnTable.rotateObject(-90);
			break;
		case 5:
			objectOnTable.printMatrix();
			break;
		default:
			cout << "nothing happening!!" << endl;
			break;
		}
	}

	return choice;
}

