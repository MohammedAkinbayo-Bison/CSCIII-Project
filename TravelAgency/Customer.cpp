#include "Customer.h"

Customer::Customer(std::string first, std::string last, int curLocationID) {
	this->fname = first;
	this->lname = last;
	this->currentLocID - curLocationID;
}

void Customer::setBudget(float budget) {
	this->budget = budget;
}

void Customer::setCurrentLocation(int locID) {
	this->currentLocID = locID;
}

float Customer::getBudget() {
	return budget;
}

int Customer::getCurrentLocation() {
	return currentLocID;
}
