#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void exercise1 ();
void exercise2();
void exercise3();
void exercise3part2();
void exercise3part3();

int main () {
    
    cout<<"EXERCISE 1\n\n";
    exercise1();
    cout << "Opening file: demofile.txt\n";
    ifstream ifs;
    char buff[256];
    ifs.open("/users/hamstache/demofile.txt");
    while (ifs.getline(buff, 256)) {
        if (ifs.rdstate() & std::ifstream::eofbit)
            break;
        cout << buff << "\n";
    }
    cout <<endl<<endl;
    cout<< "EXERCISE 2\n\n";
    
    exercise2();
    cout<<"\n\nEXERCISE 3\n\n";
    
    exercise3();
    cout<<endl<<endl;
    exercise3part2();
    cout<<endl<<endl;
    exercise3part3();
    
    cout<<endl<<endl;
       
    return 0;
}