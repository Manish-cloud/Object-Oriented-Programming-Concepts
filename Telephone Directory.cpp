/* 
 * File:   Q8.cpp
 * Author: Manish
 *
 * Created on 9 September, 2018, 10:34 AM
 */
#include<iostream>
//#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;

class TelephoneDirectory
{
        private:char name[20];
                long long PhoneNumber; 
        public :void set();
                void display()const;
                char * get_name(); 
                long long get_PhoneNumber();
};

void TelephoneDirectory::set()
{
        cout<<"Enter Name          :";
        cin>>this->name;
        cout<<"Enter Phone number  :";
        cin>>this->PhoneNumber;
}

void TelephoneDirectory::display()const
{
        cout<<"Name         :"<<this->name<<endl;
        cout<<"Phone Number :"<<this->PhoneNumber<<endl;
}
char * TelephoneDirectory::get_name() 
{
    return name;
}
long long TelephoneDirectory::get_PhoneNumber()
{
    return PhoneNumber;
}  
int main()
{
        TelephoneDirectory user;
        int Repeat=1;
        int choice;  
        do
        {
                cout<<"\n1]Create Directory\n2]Display Directory\n3]Search by Name\n4]Search by Number\n5]Update Number\n6]Exit\n  Enter your choice =";
                cin>>choice;
                
                switch(choice)
                {
                        case 1 :{
                                        ofstream f;
                                        f.open("Directory.txt",ios::app);
                                        user.set();
                                        f.write((char*)&user, sizeof(user));
                                        f.close();   
                                }
                                break;
                                
                         case 2 :{
                                        ifstream f;
                                        f.open("Directory.txt");
                                        while(!f.eof())
                                        {
                                        f.read((char*)&user, sizeof(user));
                                        if(f)
                                        user.display();
                                        }
                                        f.close();
                                }
                                break;  
                                
                         case 3 :{
                                        int flag=0;
                                        ifstream f;
                                        f.open("Directory.txt");
                                        char name[20];
                                        cout<<"Enter Name To be Searched :";
                                        cin>>name;
                                        while(!f.eof())
                                        {
                                                f.read((char*)&user, sizeof(user));
                                                if(strcmp(name,user.get_name())==0)
                                                {
                                                     flag=1;
                                                     if(f)
                                                     user.display();
                                                     break;
                                                }
                                        }
                                        if(flag==0)
                                        cout<<"Record not found";  
                                        f.close();
                                 }
                                 break;           
                                
                         case 4 :{
                                        int flag=0;
                                        ifstream f;
                                        f.open("Directory.txt");
                                        long long number;
                                        cout<<"Enter Phone Number To be Searched :";
                                        cin>>number;
                                        while(!f.eof())
                                        {
                                                f.read((char*)&user, sizeof(user));
                                                if(number==user.get_PhoneNumber())
                                                {
                                                     flag=1;
                                                     if(f)
                                                     user.display();   
                                                     break;
                                                }
                                        }
                                        if(flag==0)
                                        cout<<"Record not found";   
                                        f.close();
                                 }
                                 break; 
                                 
                         case 5 :{
                                        fstream f;
                                        int flag=0;
                                        f.open("Directory.txt",ios::in|ios::out);
                                        char name[20];
                                        cout<<"Enter Name To be Searched :";
                                        cin>>name;
                                        while(!f.eof())
                                        {
                                                f.read((char*)&user, sizeof(user));
                                                if(strcmp(name,user.get_name())==0)
                                                {
                                                     flag=1;
                                                     f.seekp(-sizeof(user),ios::cur);
                                                     user.set();  
                                                     f.write((char*)&user, sizeof(user));
                                                     break; 
                                                }
                                        }
                                        if(flag==1)
                                        cout<<"Record Updated";
                                        if(flag==0)
                                        cout<<"Record not found";
                                        f.close();
                                 }
                                 break;
                            
                         case 6 :Repeat=0;       
                                
                         break;
                         
                         default : cout<<"Wrong Choice !!!";        
                }          
        }while(Repeat);
}