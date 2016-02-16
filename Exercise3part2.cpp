#include <iostream>
#include <iomanip>
using namespace std;

void printtriangle( int , char, char, int);
void printline2( int& , char& , char& , int& );
void printfillchars2 (int& , char& );
void printchars2(int& , char& );

void exercise3part2(){
    
    printtriangle(1, '$' , '.' , 15);
    cout<<"$.......";
    
}

void printtriangle(int n, char c, char cfill, int width){
    
    if (n < width){
        printline2(n, c, cfill, width);
        n = n+2;
        printtriangle(n, c, cfill, width);
    }
    if (n != width){
        printline2(n, c, cfill,width);
    }
    
}

void printline2(int& n, char& c, char& cfill, int& width){
    int nfill = (width -n)/2;
    printchars2(n, c);
    printfillchars2(nfill, cfill);
    cout<<endl;
}


void printchars2(int& n, char& c){
    for (int i=0; i < n; i ++){
        cout << c;
    }
    

}



void printfillchars2( int& nfill, char& cfill){
    for (int i=0; i < nfill; i ++){
        cout << cfill;}
}


