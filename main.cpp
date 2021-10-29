//
//  main.cpp
//  Pytha
//
//  Created by Sameen Dharia on 2021-09-15.
#include <iomanip>
#include <math.h>
#include <iostream>
using namespace std;
int main(){
    double a , b , c;
    string value, unit;
    
    cout<<"Enter what your are solving for"<<endl;
    cin>>value;
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Enter unit of measurment"<<endl;
    cin>>unit;
    
    if (value=="c"||value=="C") {
        cout<<"Enter a value"<<endl;
        cin>>a;
        cout<<"Enter b value"<<endl;
        cin>>b;
        c=sqrt(a*a+b*b);
        cout<<" C= "<<c<<unit<<endl;
    }
    
    else if (value=="A"|| value=="a"){
       cout<<"Enter c value"<<endl;
    cin>>a;
       cout<<"Enter b value"<<endl;
    cin>>b;
        a=sqrt(c*c-b*b);
    cout<<" A= "<<a<<unit<<endl;
    }
    else if (value=="B"|| value=="b"){
        cout<<"Enter C value"<<endl;
        cin>>c;
        cout<<"Enter A value"<<endl;
        cin>>a;
        b=sqrt(c*c-a*a);
        cout<<"B= "<<b<<unit<<endl;
    
    }
    


}
    
