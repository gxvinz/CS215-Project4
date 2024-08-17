#include <iostream>
#include <iomanip>
#include<string>
#include "fruit.h"
using namespace std;

fruit::fruit() {
	name = "";
	calories = 0;
}

string fruit::getName() {
	return name;
}

int fruit::getCal() {
	return calories;
}

void fruit::setName(string name1) {
	name = name1;
}

void fruit::setCal(int cal) {
	calories = cal;
}