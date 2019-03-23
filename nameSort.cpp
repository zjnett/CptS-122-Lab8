#include "nameSort.h"

using std::cout;
using std::endl;
using std::string;
using std::fstream;

void nameSort::runApp(void) {
    fstream infile;
    string names[5];
    populateNameArray(infile, names);
    for (int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }
}

bool nameSort::populateNameArray(fstream &infile, string arr[]) {
    infile.open("names.txt");
    if (infile != nullptr) {
        int i = 0;
        while(!infile.eof()) {
            std::getline(infile, arr[i]);
            i++;
        }
        infile.close();
        return true;
    }
    return false;
}