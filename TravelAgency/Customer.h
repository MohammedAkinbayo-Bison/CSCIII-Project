#pragma once
#include<string>

class Customer
{
	private:
		float budget = 0;
		int currentLocID;
	public:
		std::string fname, lname;

		Customer(std::string fname, std::string lname, int currentLocID);
		
		//SETTERS//
		void setBudget(float budget);
		void setCurrentLocation(int locID);

 		//GETTERS//
		float getBudget();
		int getCurrentLocation();

};

