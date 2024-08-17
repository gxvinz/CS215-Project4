#pragma once
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
class fruit{
public:
	fruit();
	string getName();
	int getCal();
	void setName(string name1);
	void setCal(int cal);

private:
	string name;
	int calories;
};
	