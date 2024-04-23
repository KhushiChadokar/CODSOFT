//simple_calculator
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int num1,num2,op_choice;
    while(true){
        cout<<"Choose an operation: "<<endl;
        cout<<"1. ADDITION "<<endl;
        cout<<"2. SUBTRACTION "<<endl;
        cout<<"3. MULTIPLICATION "<<endl;
        cout<<"4. DIVISION "<<endl;
        cout<<"5. MODULUS "<<endl;
        cout<<"6. EXIT "<<endl;
        cout<<"Enter your choice: ";   //choose an operation
        cin>>op_choice;  
        switch(op_choice){
            case 1 :                        //addition 
            cout<<"Enter two numbers: "<<endl;
            cin>>num1>>num2;
            cout<<"ADDITION: "<<num1+num2<<endl;
            break;

            case 2 :                        //subtraction
            cout<<"Enter two numbers: "<<endl;
            cin>>num1>>num2;
            cout<<"SUBTRACTION: "<<num1-num2<<endl;
            break;

            case 3 :                        //multiplication
            cout<<"Enter two numbers: "<<endl;
            cin>>num1>>num2;
            cout<<"MULTIPLICATION: "<<num1*num2<<endl;
            break;

            case 4 :                        //divison
            cout<<"Enter two numbers: "<<endl;
            cin>>num1>>num2;
            cout<<"DIVISION: "<<endl;
            if(num2!=0)
            cout<<num1/num2<<endl;
            else
            cout<<"Error! Cannot divide by zero"<<endl;
            break;
 
            case 5 :                        //modulo
            cout<<"Enter two numbers: "<<endl;
            cin>>num1>>num2;
            cout<<"MODULUS: "<<num1%num2<<endl;
            break;

            case 6 :                        //exit_calculator
            exit(0);

            default :
            cout<<"Invalid!! choice"<<endl;
        }
    }
    cout<<endl;
    return 0;
}

