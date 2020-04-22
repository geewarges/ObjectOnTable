#ifndef MANAGEOBJECT_H
#define MANAGEOBJECT_H

#include "Object.h"
#include <vector>

class ManageObject
{
private:
	Object object;
	vector<vector<int>> theMatrix;
	
	int row, Colm;
	bool checkIfOnBoard();
public:
	ManageObject(int x, int y);
	virtual ~ManageObject();

	void moveObjectForward();
	void moveObjectBackward();
	void rotateObject(const int rot);
	const void printMatrix();
};
#endif // !MANAGEOBJECT_H