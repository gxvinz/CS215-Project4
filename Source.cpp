#include <iostream>
#include <iomanip>
#include<string>
#include "flist.h"
using namespace std;


int main() {               
    flist f;
   
    f.read();
    f.print();
    cout << f.sweetest();

    system("pause");
    return 0;
}
