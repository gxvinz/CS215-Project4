#include <iostream>
#include <iomanip>
#include<string>
#include <fstream>
#include "flist.h"
#include"fruit.h"
using namespace std;

flist::flist() {
	
}

void flist::print() {
	for (int i = 0; i < numFruits; i++) {
		cout << f[i].getName() << " " << f[i].getCal() << endl;
	}
}

string flist::sweetest() {
	int num = 0;
	int best;
	for (int i = 0; i < numFruits; i++) {
		if (f[i].getCal() > num) {
			num = f[i].getCal();
			best = i;
		}
	}
	string temp = f[best].getName();
	return temp;
}

void flist::read() {
	ifstream fin;
	fin.open("dafruit.txt");
	if (fin.fail()) {
		cout << "unable to open file" << endl;
	}
	else {
		string temp;
		int temp1;
		fin >> numFruits;
		for (int i = 0; i < numFruits; i++) {
			fin >> temp;
			f[i].setName(temp);
			fin >> temp1;
			f[i].setCal(temp1);
		}
	}
}