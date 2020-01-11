/* 
 * File:   Q5.cpp
 * Author: Manish
 *
 * Created on 21 August, 2018, 10:24 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

template <class X>
class Vector
{
        private:X a,b,c,d;   
                X a1,b1,c1;   
        public:void getVector();
               void cal();
               void displayVector()const;
               void getScalar();
               void displayResultant()const;
};

template <class X> void Vector<X>::getVector()
{
 cout<<"Enter vector details"<<endl;
 cout<<"Enter x component of vector:";
 cin>>a;
 cout<<"Enter y component of vector:";
 cin>>b;
 cout<<"Enter z component of vector:";
 cin>>c;
}

template <class X> void Vector<X>::displayVector()const
{
 cout<<"Entered vector :: "<<showpos<<a<<"i"<<showpos<<b<<"j"<<showpos<<c<<"k"<<endl;
}

template <class X> void Vector<X>::getScalar()
{
 cout<<"Enter scalar multiple:";
 cin>>d;
}

template <class X>void Vector<X>::cal()
{
 a1=a*d;
 b1=b*d;
 c1=c*d;
}

template <class X>void Vector<X>::displayResultant()const
{
 cout<<"Resultant vector :: "<<showpos<<a1<<"i"<<showpos<<b1<<"j"<<showpos<<c1<<"k"<<endl;
}

int main()
{
    Vector <int>v1;
    Vector <float>v2;
    Vector <double>v3;
    int a;
    int b=1;
 
    do
    {
    cout<<"ENTER\n1]for integer\n2]for float\n3]for double\n4]To exit\n";
    cin>>a;


        switch(a)
        {
               case 1:v1.getVector();
                      v1.displayVector();
                      v1.getScalar();
                      v1.cal();
                      v1.displayResultant();
                      break;

               case 2:v2.getVector();
                      v2.displayVector();
                      v2.getScalar();
                      v2.cal();
                      v2.displayResultant();
                      break;

               case 3:v3.getVector();
                      v3.displayVector();
                      v3.getScalar();
                      v3.cal();
                      v3.displayResultant();
                      break;       
               case 4:b=0;
                      break;
               default:cout<<"\nINVALID INPUT!!!!!!\n";
        }

    }while(b==1);
}