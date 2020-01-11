/* 
 * File:   Q3.cpp
 * Author: Manish
 *
 * Created on 24 August, 2018, 6:33 AM
 */

//#include <cstdlib>
//#include<iostream>
//using namespace std;
//
//class complex
//{
//private:
//    int r;
//    int i;
//public:
//    friend istream & operator>>(istream &in ,complex &c)
//    {
//        cout<<"PLEASE ENTER REAL PART OF COMPLEX NUMBER:";
//        in>>c.r;
//        cout<<"PLEASE ENTER IMAGINARY PART OF AN COMPLEX NUMBER:";
//        in>>c.i;
//    }
//    
//    friend ostream & operator<<(ostream &out ,complex &c)
//    {
//        cout<<"COMPLEX NUMBER ="<<c.r<<showpos<<c.i<<"i"<<endl;
//    }
//    
//    complex operator+(complex);
//    complex operator-(complex);
//};
//
//
//complex complex::operator+(complex c)
//{
//     complex temp;
//     temp.r=r+c.r;
//     temp.i=i+c.i;
//     return temp;
// }
//
//complex complex::operator-(complex c)
//{
//    complex temp;
//    temp.r=r-c.r;
//    temp.i=i-c.i;
//    return temp;
//}
//
//int main(int argc, char** argv)
//{
//    complex c1,c2,c3;
//    cout<<"ENTER DETAILS OF FIRST COMPLEX NUMBER:"<<endl;
//    cin>>c1>>c2;
//    cout<<c1;
//    
//    cout<<"\nENTER DETAILS OF SECOND COMPLEX NUMBER:"<<endl;
//    cin>>c2;
//    cout<<c2;
//    
//    cout<<"ADDITION RESULT OF AN COMPLEX NUMBER:"<<endl;
//    c3=c1+c2;
//    cout<<c3;
//    cout<<"SUBSTRACTION RESULT OF AN COMPLEX NUMBER:"<<endl;
//    c3=c1-c2;
//    cout<<c3;
//    return 0;
//}


/* 
 * File:   Q3.cpp
 * Author: Manish
 *
 * Created on 24 August, 2018, 6:33 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

class Complex
{
private:
    int r;
    int i;
public:
    Complex()
    {
        r=0;
        i=0;
    }
    ~Complex()
    {
        r=0;
        i=0;
    }
    friend istream & operator>>(istream &in ,Complex &c);
    friend ostream & operator<<(ostream &out ,Complex &c);
    Complex operator+(Complex&);
    Complex operator-(Complex&);
    Complex operator*(Complex&);
    Complex& operator=(const Complex&);
};
istream & operator>>(istream &in ,Complex &c)
{
    cout<<"PLEASE ENTER REAL PART OF COMPLEX NUMBER:";
    in>>c.r;
    cout<<"PLEASE ENTER IMAGINARY PART OF AN COMPLEX NUMBER:";
    in>>c.i;
    return in;
}
ostream & operator<<(ostream &out ,Complex &c)
{
    out<<"COMPLEX NUMBER ="<<showpos<<c.r<<showpos<<c.i<<"i"<<endl;
    return out;
}

Complex Complex::operator+(Complex & c)
{
    Complex temp;
    temp.r=this->r+c.r;
    temp.i=this->i+c.i;
    return temp;
}

Complex Complex::operator-(Complex & c)
{
    Complex temp;
    temp.r=this->r-c.r;
    temp.i=this->i-c.i;
    return temp;
}

Complex Complex::operator*(Complex & c)
{
    Complex temp;
    temp.r=(this->r*c.r)-(this->i*c.i);
    temp.i=r*c.i+i*c.r;
    return temp;
}

    
Complex& Complex::operator=(const Complex &c)
{
    this->i=c.i;
    this->r=c.r;
    return (* this);
}

int main(int argc, char** argv)
{
    Complex c1,c2,c3;
    cout<<"ENTER DETAILS OF FIRST COMPLEX NUMBER:"<<endl;
    cin>>c1;
    cout<<c1;
    
    cout<<"\nENTER DETAILS OF SECOND COMPLEX NUMBER:"<<endl;
    cin>>c2;
    cout<<c2;
    
    cout<<"ADDITION RESULT OF AN COMPLEX NUMBER:"<<endl;
    c3=c1+c2;
    cout<<c3;
    cout<<"SUBSTRACTION RESULT OF AN COMPLEX NUMBER:"<<endl;
    c3=c1-c2;
    cout<<c3;
    cout<<"MULTIPLICATION RESULT OF AN COMPLEX NUMBER:"<<endl;
    c3=c1*c2;
    cout<<c3;
    return 0;
}