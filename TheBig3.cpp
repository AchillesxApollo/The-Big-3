#include <iostream>
using namespace std;

void factorial(){
       int home = 1;
    int foreign;
    cout << "Enter a number to compute its factorial: ";
    cin >> foreign;

    int num = foreign; 

    for (int i = 1; i <= num; i++) {  
        home *= foreign;  
        foreign--;   
    }

    cout << "The factorial of " << num << " is " << home << endl;
}

void evenOrOdd(){
    int num, magic;

    cout<<"Enter a number: ";
    cin>>num;
    magic = 2*(num/2);
    if(magic == num){
        cout<<"The number you have entered is Even";
    }else{
        cout<<"The number you have entered is Odd";
    }
}

void matrix(){
    int row, column;
    cout<<"How many rows do you need for the array? "<<endl;
    cin>>row;
    cout<<"How many column do you need for the array? "<<endl;
    cin>>column;

    int grid[row][column];

    for(int i = 0; i < row; i++){
       for(int j = 0; j < column; j++){
        cout<<"Enter an element value for ["<<i<<"] ["<<j<<"]";
        cin>>grid[i][j];
       

       }

    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout<<"|"<<grid[i][j]<<"|";
        }
        cout<<"\n";
    }

}


int main() {

    
    char choice;
   
    cout<<"What would you like to do ?"<<endl;
    cout<<"A. I would like to know if the number that i will input is odd or even. "<<endl;
    cout<<"B. I would like to know the factorial of the number that i will input. "<<endl;
    cout<<"C. I would like to make a matrix with a row and column of my choice. "<<endl;
    cin>>choice;
    if(choice == 'A' || choice == 'a'){
        evenOrOdd();

    }else if(choice == 'B' || choice == 'b'){
         factorial();

    }else if(choice == 'C' || choice == 'c'){
         matrix();

    }else{
        cout<<"Invalid choice";
    }
        
    return 0;
}
