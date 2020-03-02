#include <iostream>
#include <fstream>

using namespace std;

void countASCII(const std::string fileName, int array[]){
    char character;
    ifstream myFile;
    myFile.open(fileName.c_str());
    while(myFile >> character)
        array[character]++;
    myFile.close();
}


int main(int argc, char* argv[]){
    int array[127] = {};
    countASCII(argv[1], array);
    for (int i=0; i<127; i++)
        cout << (char)i << " : " << array[i] << endl;
    return 0;
}
