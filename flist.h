#pragma once
#include <iostream>
#include <iomanip>
#include<string>
#include "fruit.h"
using namespace std;

const int maxFruit = 5;
class flist {
public:
	flist();
	void print();
	string sweetest();
	void read();

private:
	fruit f[maxFruit];
	int numFruits;
};
