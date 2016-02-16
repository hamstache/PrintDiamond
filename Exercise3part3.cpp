#include <iostream>
#include <iomanip>
using namespace std;

void printreversetriangle(int, char, char, int);
void printline3( int& , char& , char& , int& );
void printfillchars3 (int& , char& );
void printchars3(int& , char& );

void exercise3part3(){
    
    printreversetriangle(1, '$', '.' , 15);
    
    
    
}

void printreversetriangle(int n, char c, char cfill, int width){
    if (n < width){
        printline3(n, c, cfill, width);
        n = n+2;
        printreversetriangle(n, c, cfill, width);
    }
    if (n != width){
        printline3(n, c, cfill,width);
    }
}

void printline3(int& n, char& c, char& cfill, int& width){
    int nfill = (width -n)/2;
    printfillchars3(nfill, cfill);
    printchars3(n, c);
    
    cout<<endl;
}


void printchars3(int& n, char& c){
    for (int i=0; i < n; i ++){
        cout << c;
    }
    
    
    
}

void printfillchars3( int& nfill, char& cfill){
    for (int i=0; i < nfill; i ++){
        cout << cfill;}
}



