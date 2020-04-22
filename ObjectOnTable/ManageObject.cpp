#include "ManageObject.h"
// the numbers 1 ,2, 3, 4 represents directions
// example: 1=upp, 2=right, 3=down, 4=left

ManageObject::ManageObject(int x, int y)
{
	this->row = x;
	this->Colm = y;
	this->theMatrix = vector<vector<int>>();
	
	vector<int> item;
	 for (int i = 0; i < this->row; i++){
		 item.push_back(0);
	 }
	 for (int i = 0; i < Colm; i++) {
		 theMatrix.push_back(item);
	 }

	 this->object.setDirection(1);
	 this->object.setXPosition(0);
	 this->object.setYPosition(0);
	 this->theMatrix.at(0).at(0) = 7;
}

ManageObject::~ManageObject(){

}

void ManageObject::moveObjectForward() {

	if (object.getDirection() == 1 && (object.getPositionX() != -1 || object.getPositionY() != -1)) {
		
		if ((object.getPositionX() >= 0 || object.getPositionX() < this->row) && 
			object.getPositionY() - 1 >= 0){
			
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setYPosition(object.getPositionY() - 1);
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = object.getDirection();
		} else {
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setXPosition(-1);
			object.setYPosition(-1);
		}

	}
	if (object.getDirection() == 3 && (object.getPositionX() != -1 || object.getPositionY() != -1)) {

		if ((object.getPositionX() >= 0 || object.getPositionX() < this->row) && 
			object.getPositionY() + 1 < this->Colm){
			
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setYPosition(object.getPositionY() + 1);
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = object.getDirection();
		} else {
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setXPosition(-1);
			object.setYPosition(-1);
		}
	}
	if (object.getDirection() == 2 && (object.getPositionX() != -1 || object.getPositionY() != -1)) {

		if ((object.getPositionY() >= 0 ||object.getPositionY() < this->Colm) &&
			object.getPositionX() + 1 < this->row){
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setXPosition(object.getPositionX() + 1);
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = object.getDirection();
		} else {
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setXPosition(-1);
			object.setYPosition(-1);
		}
	}
	if (object.getDirection() == 4 && (object.getPositionX() != -1 || object.getPositionY() != -1)) {
		
		if ((object.getPositionY() >= 0 || object.getPositionY() < this->Colm) &&
			object.getPositionX() - 1 <= 0){
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setXPosition(object.getPositionX() - 1);
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = object.getDirection();
		} else {
			theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setXPosition(-1);
			object.setYPosition(-1);
		}

	}
}

void ManageObject::moveObjectBackward() {

	if (object.getDirection() == 1 && (object.getPositionX() != -1 || object.getPositionY() != -1)) {
		
		if ((object.getPositionX() >= 0 || object.getPositionX() < this->row) && 
			(object.getPositionY() + 1) < this->Colm){

			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = 0;
			object.setYPosition(object.getPositionY() + 1);
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = object.getDirection();
		}
		else {

			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = 0;
			object.setXPosition(-1);
			object.setYPosition(-1);
		}
	}

	if (object.getDirection() == 3 && (object.getPositionX() != -1 || object.getPositionY() != -1)) {

		if ((object.getPositionX() >= 0 || object.getPositionX()) < this->row && 
			(object.getPositionY() - 1) >= 0){
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = 0;
			object.setYPosition(object.getPositionY() - 1);
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = object.getDirection();
		}
		else
		{
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = 0;
			object.setXPosition(-1);
			object.setYPosition(-1);
		}
	}

	if (object.getDirection() == 2 && (object.getPositionX() != -1 || object.getPositionY() != -1)) {

		if ((object.getPositionY() >= 0 || object.getPositionY() < this->Colm) && 
			object.getPositionX() - 1 >= 0){
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = 0;
			object.setXPosition(object.getPositionX() - 1);
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = object.getDirection();
		}
		else
		{
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = 0;
			object.setXPosition(-1);
			object.setYPosition(-1);
		}
	}
	if (object.getDirection() == 4 && (object.getPositionX() != -1 || object.getPositionY() != -1)) {

		if ((object.getPositionY() >= 0 || object.getPositionY() < this->Colm) &&
			object.getPositionX() + 1 < this->row) {
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = 0;
			object.setXPosition(object.getPositionX() + 1);
			this->theMatrix.at(object.getPositionX()).at(object.getPositionY()) = object.getDirection();
		}
		else {

			this->theMatrix.at(object.getPositionY()).at(object.getPositionX()) = 0;
			object.setXPosition(-1);
			object.setYPosition(-1);
		}

	}

}

void ManageObject::rotateObject(const int rot) {

	if (rot == 90){
		switch (object.getDirection())
		{
		case 1:
			object.setDirection(object.getDirection() + 1);
			break;
		case 2:
			object.setDirection(object.getDirection() + 1);
			break;
		case 3:
			object.setDirection(object.getDirection() + 1);
			break;
		case 4:
			object.setDirection(1);
			break;
		default:
			break;
		}
	}
	if (rot == -90)
	{
		switch (object.getDirection())
		{
		case 1:
			object.setDirection(4);
			break;
		case 2:
			object.setDirection(object.getDirection() - 1);
			break;
		case 3:
			object.setDirection(object.getDirection() - 1);
			break;
		case 4:
			object.setDirection(object.getDirection() - 1);
			break;
		default:
			break;
		}
	}

}

bool ManageObject::checkIfOnBoard() {
	bool result = true;

	if (object.getPositionX() < 0 || object.getPositionX() >= this->row ||
		object.getPositionY() < 0 || object.getPositionY() >= this->Colm){
		object.setXPosition(-1);
		object.setYPosition(-1);
		result = false;
	}
	else
	{
		theMatrix.at(object.getPositionX()).at(object.getPositionY()) = 7;
	}

	return result;
}

const void ManageObject::printMatrix() {

	cout << this->object.toString();

	if (object.getPositionX() == -1 && object.getPositionY() == -1) {
		cout << "<!>The object has fallen from the table!!<!>" << endl;
	}

	for (int x = 0; x < this->row; x++){
		for (int y = 0; y < this->Colm; y++){
			cout << theMatrix.at(y).at(x) << " ";
		}
		cout << endl;
	}

	cout << "********************************" << endl << endl;
}
