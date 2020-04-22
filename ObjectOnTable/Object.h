#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Object
{
private:
	int xPos;
	int yPos;
	int direction;
public:
	Object();
	virtual ~Object();
	void setXPosition(const int pos);
	void setYPosition(const int pos);
	void setDirection(const int dir);
	const int getPositionX();
	const int getPositionY();
	const int getDirection();

	const string toString();
};
#endif // end OBJECT_H


