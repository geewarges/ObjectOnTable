#include "Object.h"

Object::Object()
{
	this->direction = 0;
	this->xPos = 0;
	this->yPos = 0;
}


Object::~Object()
{
}

// set //
void Object::setXPosition(const int pos) {
	this->xPos = pos;
}
void Object::setYPosition(const int pos) {
	this->yPos = pos;
}
void Object::setDirection(const int dir) {
	this->direction = dir;
}

// get //
const int Object::getPositionX() {
	return this->xPos;
}
const int Object::getPositionY() {
	return this->yPos;
}
const int Object::getDirection() {
	return this->direction;
}

// show info //
const string Object::toString() {
	stringstream ss;

	ss << "***Object Currently position***" << endl;
	ss << "*******************************" << endl;
	ss << "xPos: " << this->xPos << " yPos: " << this->yPos << endl;
	ss << "Direction: " << this->direction << endl;
	ss << "*******************************" << endl;

	return ss.str();
}
