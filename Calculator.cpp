/* 
 * File:   Q1.cpp
 * Author: Manish
 *
 * Created on 21 August, 2018, 10:42 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//class Calculator                             
//{
//	private: double num1;
//                 double num2;
//	
//	public : void get();
//		
// 		 void addition();
//			
//		 void subtraction();
//
//		 void multiplication();
// 	
//		 void division();
//
//};
//
//void Calculator :: get()
//	{
//            cout<<"\nENTRE THE TWO NUMBER:\n";
//            cin>>num1>>num2;
//	}
//void Calculator :: addition()
//	{
//            get();
//            double result=0;
//            result=num1+num2;
//           
//            cout<<"\nADDITION RESULT IS : "<<result<<endl;
//	}
//void Calculator :: subtraction()
//	{
//            get();
//            double result=0;
//            result=num1-num2;
//            
//            cout<<"\nSUBSTRACTION RESULT IS : "<<result<<endl;
//	}
//
//void Calculator :: multiplication()
//	{	
//            get();
//            double result=0;
//            result=num1*num2;
//            
//            cout<<"\nMULTIPLICATION RESULT IS : "<<result<<endl;
//	}
//
//void Calculator :: division()
//	{	
//            get();
//            double result=0;
//            result=num1/num2;
//            
//            cout<<"\nDIVISION RESULT IS : "<<result<<endl;
//	}
//
//
//
//int main()
//	{
//            Calculator c;
//            
//            int x=0;
//            int a=1;
//            do
//            {
//                cout<<"\nEnter :\n1]To perform Addition\n2]To perform Subtraction\n3]To perform Multiplication\n4]To perform Division\n5]To exit\n";
//                cin>>x;
//                
//                switch(x)
//                {
//                    case 1:c.addition();
//                    break;
//                    case 2:c.subtraction();
//                    break;
//                    case 3:c.multiplication();
//                    break;
//                    case 4:c.division();
//                    break;
//                    case 5:a=0;
//                    break;
//                    default:cout<<"\nWrong input!!!!!\n";
//                    break;
//                }
//                
//            }while(a);         
//            return 0;
//	}

class Calculator                             
{
private:
    double num1;
    double num2;
public :
    Calculator();
    Calculator(double,double);
    Calculator(const Calculator&);
    ~Calculator();
    void acceptNumbers();
    void addition();
    void subtraction();
    void multiplication();
    void division();
};

Calculator::Calculator()
{
    num1=0;
    num2=0;
}

Calculator::~Calculator()
{
    num1=0;
    num2=0;
}

Calculator::Calculator(double num1,double num2)
{
    this->num1=num1;
    this->num2=num2;
}

//Calculator::Calculator(double num1,double num2):num1(num1),num2(num2)
//{}

//Calculator::Calculator(double num1=0,double num2=0):num1(num1),num2(num2)
//{}

Calculator::Calculator(Calculator const& ref)
{
    this->num1=ref.num1;
    this->num2=ref.num2;
}

void Calculator :: acceptNumbers()
{
    cout<<"\nENTRE THE TWO NUMBER:\n";
    cin>>num1>>num2;
}
void Calculator :: addition()
{
    acceptNumbers();
    double result=0;
    result=num1+num2;          
    cout<<"\nADDITION RESULT IS : "<<result<<endl;
}
void Calculator :: subtraction()
{
    acceptNumbers();
    double result=0;
    result=num1-num2;            
    cout<<"\nSUBSTRACTION RESULT IS : "<<result<<endl;
}

void Calculator :: multiplication()
{	
    acceptNumbers();
    double result=0;
    result=num1*num2;
    cout<<"\nMULTIPLICATION RESULT IS : "<<result<<endl;
}

void Calculator :: division()
{	
    acceptNumbers();
    double result=0;
    result=num1/num2;            
    cout<<"\nDIVISION RESULT IS : "<<result<<endl;
}

int main()
{
    Calculator c,c1;
    c1=c;
    int x=0;
    int a=1;
    do
    {
    cout<<"\nEnter :\n1]To perform Addition\n2]To perform Subtraction\n3]To perform Multiplication\n4]To perform Division\n5]To exit\n";
    cin>>x;
        switch(x)
        {
            case 1:c.addition();
            break;
            case 2:c.subtraction();
            break;
            case 3:c.multiplication();
            break;
            case 4:c.division();
            break;
            case 5:a=0;
            break;
            default:cout<<"\nWrong input!!!!!\n";
            break;
        }
    }while(a);         
    return 0;
}