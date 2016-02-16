#include <iostream>
#include <iomanip>
using namespace std;


void displaymenu();
int getchoice();
void generatetable(double starttemp, double endtemp, int stepsize, int choice);


void exercise2() {
    
    
    int choice,stepsize;
    double startingtemp, endingtemp;
    displaymenu();
    do{
        choice = getchoice();

        if (choice == 5){
            cout <<"Done.\n\n";
        }else {
            cout <<"Enter starting temp: ";
            cin >> startingtemp;
            cout<<"Enter ending temp: ";
            cin >> endingtemp;
            cout << "Enter step size: ";
            cin>> stepsize;
    
        generatetable( startingtemp, endingtemp, stepsize, choice);
        
        
        }
   
    }while (choice != 5);
    
    
    
}

void displaymenu(){
    cout<<"             Menu\n";
    cout<< "1. Convert Fahrenheit to Celsius\n";
    cout<< "2. Convert Celsius to Fahrenheit\n";
    cout<< "3. Convert Celsius to Kelvin\n";
    cout<< "4. Convert Kelvin to Celsius\n";
    cout<< "5. Quit the program\n\n";
    
}

int getchoice() {
    int choice;
    cout<<"Enter menu choice: ";
    cin >> choice;
    if (choice > 5){
        cout<<"Invalid menu choice. Choose 1, 2, 3, 4, or 5.\n";
        cout<<"Enter menu choice: ";
        cin>>choice;
    }
    
    return choice;
}

void generatetable( double starttemp, double endtemp, int stepsize, int choice){
    
    double answer;
    if (choice == 1){
        
        for (int i = starttemp; i <= endtemp; i = i + stepsize){
            answer = (starttemp-32) *5.0/9;
            cout <<right<<setw(8)<<fixed<<setprecision(2) << starttemp << " F ===> " <<fixed<<setprecision(2)<< answer << " C\n";
            starttemp = starttemp + stepsize;
            
            
        }
        
    }else if (choice == 2){
        for (int i = starttemp; i <= endtemp; i = i + stepsize){
            answer = (starttemp*9.0)/(5+32);
            cout <<right<<setw(8)<<fixed<<setprecision(2) << starttemp << " C ===> " <<fixed<<setprecision(2)<< answer << " F\n";
            starttemp = starttemp + stepsize;
            
            
        }
    }else if (choice == 3){
        for (int i = starttemp; i <= endtemp; i = i + stepsize){
            answer = (starttemp-273.0);
            cout <<right<<setw(8)<<fixed<<setprecision(2) << starttemp << " C ===> " <<fixed<<setprecision(2)<< answer << " K\n";
            starttemp = starttemp + stepsize;
            
            
        }
        
        
    }else{
        for (int i = starttemp; i <= endtemp; i = i + stepsize){
            answer = (starttemp+273.0);
            cout <<right<<setw(8)<<fixed<<setprecision(2) << starttemp << " K ===> " <<fixed<<setprecision(2)<< answer << " C\n";
            starttemp = starttemp + stepsize;
            
        }
        
    }
    
    
    
    
    
    
    
    
    
    
    
}