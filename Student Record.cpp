/* 
 * File:   Q1.cpp
 * Author: Manish
 *
 * Created on 6 July, 2018, 7:39 PM
 */



#include <cstdlib>
#include<iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
public:
    Student();
    ~Student();
    Student(string name, int roll);
    void create();
    void display()const;
    int get_roll()const;
};

Student::Student() {
    roll = 0;
    name = "SORRY NO NAME TO DISPLAY!!!";
}

Student::~Student()
{
    roll=0;
    name.clear();
}

Student::Student(string name, int roll) {
    this->name = name;
    this->roll = roll;
}

void Student::create() {
    cout << "PLEASE ENTER THE STUDENT NAME:";
    cin>>this->name;
    cout << "PLEASE ENTER THE STUDENT ROLL NUMBER:";
    cin>>this->roll;
}

void Student::display()const {
    cout << "STUDENT NAME       :" << this->name << endl;
    cout << "STUDENT ROLL NUMBER:" << this->roll << endl << endl;
}

int Student::get_roll()const {
    return this->roll;
}

int main() {
    Student * s = new Student[2];
    
    char i,ch,y;
    int j = -1,a, l;
    int flag = 0;

    do {
            cout << "\n--------------------------------------------------------------------------------------------------";
            cout << "\nPLEASE ENTER:\n1]TO CREATE AN STUDENT ACCOUNT.\n2]TO DISPLAY AN ALL STUDENT DETAILS.\n3]TO DISPLAY AN DETAILS OF AN ONE STUDENT.\n4]TO UPDATE AN STUDENT DETAILS.\n5]CLEAR LIST OF STUDENT AND EXIT.\nENTER CHOISE : ";
            cin>>i;
            switch (i)
            {
                case '1':
                    do
                    {
                        j++;
                        s[j].create();
                        cout<<"CONTINUE 'y' : ";
                        cin>>y;
                        cout<<endl;      
                    }while(y=='Y'||y=='y');
                break;

                case '2':if (j >=0) 
                {
                    for (int k = 0; k<=j; k++)
                        s[k].display();
                } else
                    cout << "NO DETAILS TO DISPLAY" << endl;
                break;

                case '3':if (j>=0) 
                {
                    flag=0;
                    cout << "ENTER THE ROLL NUMBER FOR U WANT TO SEARCH:";
                    cin>>a;
                    for (l = 0; l<=j; l++) 
                    {
                        if (a == s[l].get_roll()) 
                        {
                            flag = 1;
                            break;
                        }
                    }
                        if (flag == 1)
                            s[l].display();
                        else 
                        {
                            cout << "ENTERED ROLL NUMBER IS NOT PRESENT!!!!!" << endl;
                        }
                } else
                        cout << "NO DETAILS TO DISPLAY" << endl;
                break;

                case '4':if (j>=0) 
                {
                    flag=0;
                        cout << "PLEASE ENTER ROLL NUMBER FOR WHICH U WANT TO UPDATE:";
                        cin>>a;
                        for (l = 0; l<=j; l++) {
                            if (a == s[l].get_roll()) {
                                flag = 1;
                                break;
                            }
                        }
                        if (flag == 1)
                            s[l].create();
                        else {
                            cout << "ENTERED ROLL NUMBER IS NOT PRESENT!!!!!" << endl;
                        }
                } 
                else
                    cout << "NO DETAILS TO UPDATE!!!!!" << endl;
                break;
                case '5':delete [] s;
                    j = -1;
                    cout << "\nDATA SUCCESSFULLY DELETED .....";
                    break;

                default:cout << "WRONG INPUT!!!!!" << endl;

            }
            if(i== '5')
                break;
    } while (i != '5');
}


//#include <cstdlib>
//#include<iostream>
//
//using namespace std;
//
//class Student 
//{
// private:
//         int roll;
//         string name;
// public:
//        Student();
//        Student(string name,int roll);
//        void create();
//        void display()const;       
//	int  get_roll()const;
//};
//
//Student::Student()
//{
//    roll=0;
//    name="SORRY NO NAME TO DISPLAY!!!";
//}
//
//Student::Student(string name,int roll)
//{
//    this->name=name;
//    this->roll=roll;
//}
//
//void Student::create()
//{ 
//    cout<<"PLEASE ENTER THE STUDENT NAME:";
//    cin>>name;
//    cout<<"PLEASE ENTER THE STUDENT ROLL NUMBER:";
//    cin>>roll;
//}
//
//void Student::display()const
//{
//    cout<<"STUDENT NAME:"<<name<<endl;
//    cout<<"STUDENT ROLL NUMBER:"<<roll<<endl<<endl;
//}
//
//
//int Student::get_roll()const
//{
//    return roll;
//}
//
//
//int main()
//{
//    Student s[10];
//    char i;
//    int j=0;
//    int a,l;
//    char ch;
//    int flag=0;
// 
//    do
//    {
//    cout<<"\nPLEASE ENTER: \n1]TO CREATE AN STUDENT ACCOUNT.\n2]TO DISPLAY AN ALL STUDENT DETAILS.\n3]TO DISPLAY AN DETAILS OF AN ONE STUDENT.\n4]TO UPDATE AN STUDENT DETAILS.\n"<<endl;
//    cin>>i;
//    switch(i)
//
//      {
//           case '1':s[j].create();
//                    j++;
//                    break;
//           case '2':if(j)
//                    {
//                     for(int k=0;k<j;k++)
//                     s[k].display();
//                    }
//                    else
//                    cout<<"NO DETAILS TO DISPLAY"<<endl;
//                    break;
//           case '3':if(j)
//                    {
//                       cout<<"ENTER THE ROLL NUMBER FOR U WANT TO SEARCH:";
//                       cin>>a;
//                       for(l=0;l<10;l++)
//                       {
//                           if(a==s[l].get_roll())
//                           {
//                           flag=1;
//                           break;
//                           }
//                       }
//                       if(flag==1)
//                       s[l].display();
//                       else
//                       {cout<<"ENTERED ROLL NUMBER IS NOT PRESENT!!!!!"<<endl;}
//                    }
//                    else 
//                    cout<<"NO DETAILS TO DISPLAY"<<endl;
//                    break;
//           case '4':if(j)
//                    {
//                       cout<<"PLEASE ENTER ROLL NUMBER FOR WHICH U WANT TO UPDATE:";
//                       cin>>a;
//                       for(l=0;l<10;l++)
//                       {
//                           if(a==s[l].get_roll())
//                           {
//                           flag=1;
//                           break;
//                           }
//                       }
//                       if(flag==1)
//                       s[l].create();
//                       else
//                       {cout<<"ENTERED ROLL NUMBER IS NOT PRESENT!!!!!"<<endl;}
//                    }
//                    else
//                    cout<<"NO DETAILS TO UPDATE!!!!!"<<endl;
//                    break;
//
//           default:cout<<"WRONG INPUT!!!!!"<<endl;
//      }
//     cout<<"ENTER 'Y' TO RETURN TO AN MAIN MENU:";
//     cin>>ch;
//     
//    }while(ch=='Y'||ch=='y');
//}