#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void exercise1() {
    
    ofstream outputFile;
    outputFile.open ("/users/hamstache/demofile.txt") ;
    
    cout << "Now writing data to the file... \n";
    outputFile << "Mozart" << endl << "Beethoven" << endl
    << "Schubert" << endl << "J.S. Bach" << endl
    << "F. Chopin" << endl << "Pyotr Tchaikovsky" << endl
    << "rachmaninov" << endl << "F. Liszt" << endl
    << "Joseph Haydn" << endl << "Antonio Vivaldi" << endl;
    
    outputFile.close();
    cout<< ". . .done. \n";
    
    
    
}