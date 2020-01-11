/* 
 * File:   File Handling.cpp
 * Author: Manish
 *
 * Created on 28 September, 2018, 9:31 AM
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    
    string str;
    ofstream fout;
    
    fout.open("File.txt");
    cout<<"Enter the string : ";
    getline(cin,str);
    fout<<str;
    fout.close();
    
    ifstream fin;
    fin.open("File.txt",ios::in);
    //fin.seekg(ios::beg);
    string str1;
    while(fin)
    {
        getline(fin,str1);
    }
    cout<<str1;
    
    cout<<endl;
    return 0;
}