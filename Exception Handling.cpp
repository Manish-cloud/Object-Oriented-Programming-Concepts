/* 
 * File:   Q7.cpp
 * Author: Manish
 *
 * Created on 21 August, 2018, 10:15 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>
#define SIZE 10 
using namespace std;

class check
{
        private:int age;
                double income;
                char location[SIZE];
                char ch;
                
        public :
            check()
            {
                age=0;
                income=0;
                ch=' ';
            }
            void get();
            void display();        
};

void check::get()
{
    int x;
    int flag=0;
    int age;
    double income;
    char location[10];
    char ch;
    char arr[][10]={"Pune","Mumbai","Delhi","Chennai"};
    
        cout<<"Enter age :";
        cin>>age;
        if(age>18&&age<55)
            this->age=age;
        else 
        throw (age);
        
        cout<<"Enter income:";
        cin>>income;
        if(income>50000&&income<100000)
            this->income=income;
        else 
        throw (income);
        
        cout<<"Enter location:";
        cin>>location;
        for(int i=0;i<4;i++)
        {
                 x=strcmp(arr[i],location);
                 if(x==0)
                 {
                     flag=1;
                 break;
                 }
        }
        if(flag==1)
            for(int i=0;location[i]!='\0';i++)
            this->location[i]=location[i];
        else
        throw "City not found!!!\n";
        
        cout<<"Enter 'y' if u have four wheeler else 'n' : ";
        cin>>ch;
        if(ch=='y'||ch=='Y')
            this->ch=ch;
        else
        throw "Vehicle not found!!!\n";
}

void check::display()
{
    cout<<"Age = "<<this->age<<endl;
    cout<<"Income = "<<this->income<<endl;
    cout<<"Location = "<<this->location<<endl;
    cout<<"Status of Vechile = "<<this->ch<<endl;
}

int main()
{
        check c;
        try
        {
        c.get();   
        }
        
        catch(int age)
        {
            cout<<"\nInvalid age entered !!! Entered age ="<< age<<endl ;
            return 0;
        }
        catch(double income)
        {
            cout<<"\nInvalid income entered !!! Entered income ="<< income <<endl; 
        }
        catch(char const*str)
        {
                cout<<"\n"<<str;      
        }
        c.display();
        
}