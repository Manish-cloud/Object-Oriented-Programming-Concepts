/* 
 * File:   Q4.cpp
 * Author: Manish
 *
 * Created on 21 August, 2018, 10:28 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class PersonalRecord
{
  protected:
  string name;
  string gender;
  int age;
  string dob;
  long long int mobilenum;
  
 public:
   PersonalRecord()=default;
   PersonalRecord(string, string, int, string, long long int);
   ~PersonalRecord()
   {
       name.clear();
       gender.clear();
       age=0;
       dob.clear();
       mobilenum=0;
   }
   void get_PersonalRecord();
   void put_PersonalRecord()const;
  
};
PersonalRecord::PersonalRecord(string name,string gender,int age,string dob,long long int mobilenum):name(name),gender(gender),age(age),dob(dob),mobilenum(mobilenum)
{
}
void PersonalRecord::get_PersonalRecord()
{ 
 cout<<"ENTER YOUR NAME                              :";
 getline(cin,name);
 cout<<"ENTER YOUR GENDER                            :";
 cin>>gender;
 cout<<"ENTER YOUR AGE                               :";
 cin>>age; 
 cout<<"ENTER YOUR BIRTH DATE                        :";
 cin>>dob;
 cout<<"ENTER YOUR CONTACT NUMBER                    :";
 cin>>mobilenum; 
}

void PersonalRecord::put_PersonalRecord()const
{
 cout<<"NAME                      :"<<name<<endl;
 cout<<"GENDER                    :"<<gender<<endl;
 cout<<"AGE                       :"<<age<<endl;
 cout<<"BIRTH DATE                :"<<dob<<endl;
 cout<<"CONTACT NUMBER            :"<<mobilenum<<endl;
}

class ProfessionalRecord
{
 protected:
  string companyname;
  int exp;
  long long int salary;
  string degree;
  string lang;
 public:
  ProfessionalRecord()=default;
  ProfessionalRecord(string companyname,int exp,long long int salary,string degree,string lang)
  {
    this->companyname=companyname;
    this->exp=exp;
    this->salary=salary;
    this->degree=degree;
    this->lang=lang;
  }
  void get_ProfessionalRecord();
  void put_ProfessionalRecord()const;
  
};

void ProfessionalRecord::get_ProfessionalRecord()
{ 
 cout<<"ENTER YOUR COMPANY NAME                      :";
 cin>>companyname;
 cout<<"ENTER YOUR YEAR OF EXPERIENCE                :";
 cin>>exp;
 cout<<"ENTER YOUR SALARY                            :";
 cin>>salary;
 cout<<"ENTER THE DEGREE NAME THAT U HAVE            :";
 cin>>degree;
 cout<<"ENTER THE COMMUNICATION LANGUAGE THAT U KNOW :";
 cin>>lang;
}

void ProfessionalRecord::put_ProfessionalRecord()const
{
 cout<<"COMPANY NAME              :"<<companyname<<endl;
 cout<<"YEAR OF EXPERIENCE        :"<<exp<<endl;
 cout<<"SALARY                    :"<<salary<<endl;
 cout<<"DEGREE NAME               :"<<degree<<endl;
 cout<<"COMMUNICATION LANGUAGE    :"<<lang<<endl;
};

class AcademicRecord
{
 protected:
  string qua;
  float per;
  char grade;
 public:
  //AcademicRecord()=default;
  AcademicRecord(string qua="",float per=0.0f,char grade=' ')
  {
      this->qua=qua;
      this->per=per;
      this->grade=grade;
  }
  void get_AcademicRecord();
  void put_AcademicRecord()const;
};

void AcademicRecord::get_AcademicRecord()
{
 cout<<"ENTER YOUR QUALIFICATION                     :";
 cin>>qua;
 cout<<"ENTER YOUR PERCENTAGE                        :";
 cin>>per;
 cout<<"ENTER YOUR GRADE                             :";
 cin>>grade;
}

void AcademicRecord::put_AcademicRecord()const
{
 cout<<"QUALIFICATION             :"<<qua<<endl;
 cout<<"PERCENTAGE                :"<<per<<endl;
 cout<<"GRADE                     :"<<grade<<endl;
}


class Biodata :private PersonalRecord,private ProfessionalRecord,private AcademicRecord
{
 public:
     Biodata()=default;
     Biodata(string name,string gender,int age,string dob,long long int mobilenum,string companyname,int exp,long long int salary,string degree,string lang,string qua,float per,char grade):PersonalRecord(name,gender,age,dob,mobilenum),ProfessionalRecord(companyname,exp,salary,degree,lang),AcademicRecord(qua,per,grade)
     {}
 void get_Biodata();
 void put_Biodata()const;
};

void Biodata::get_Biodata()
{
 get_PersonalRecord();
 get_ProfessionalRecord();
 get_AcademicRecord();
}

void Biodata::put_Biodata()const
{
 put_PersonalRecord();
 put_ProfessionalRecord();
 put_AcademicRecord();
}
 
int main()
{
    Biodata b;
    Biodata b1("Manish","M",18,"5/08",9860377625,"Google",3,5000000,"Computer","Eng","SE",99,'A');
//    b.get_Biodata();
//    b.put_Biodata();
}