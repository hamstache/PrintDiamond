#include <iostream>
#include <iomanip>
using namespace std;

void printdiamond( int , char , char , int );
void printline( int& , char& , char& , int& );
void printfillchars (int& , char& );
void printchars(int& , char& );

void exercise3(){
    
    printdiamond(1, '$', '.', 35);
    
}

void printdiamond (int n, char c, char cfill, int width){
    
    if (n < width){
        printline( n, c, cfill, width);
        n = n+2;
        printdiamond(n, c, cfill, width);
    }
    if (n != width){
        n = n-2;
        printline(n, c, cfill,width);
    }
    /*printline(n, c, cfill,width);*/
    
    
}




void printline(int& n, char& c, char& cfill, int& width){
    int nfill = (width -n)/2;
    printfillchars(nfill, cfill);
    printchars(n, c);
    printfillchars(nfill, cfill);
    cout<<endl;
}

void printchars(int& n, char& c){
    for (int i=0; i < n; i ++){
        cout << c;
    }
}

void printfillchars( int& nfill, char& cfill){
    for (int i=0; i < nfill; i ++){
        cout << cfill;}
}