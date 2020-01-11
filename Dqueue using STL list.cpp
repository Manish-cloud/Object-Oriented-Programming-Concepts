/* 
 * File:   Deque using STL list.cpp
 * Author: Manish
 *
 * Created on 1 October, 2018, 9:53 AM
 */

#include<cstdlib>
#include<iostream>
//#include<iterator>
#include<list>

#define DEQUESIZE 10

using namespace std;

void showList( list < int > g)
{
        list <int> :: iterator it ;
        it=g.begin();
        do
        {
                cout<<"\t"<< *it ;
                it++;
        }while (it != g.end() );
}


int main()
{
	list <int> deque;
	char ch;
	int choice,val;
	int exit=1;
	
	
	do
	{
	        cout<<"\n\t Deque Operations (MAX SIZE =10)";
	        cout<<"\n1.Push at end\n2.Push at beginning\n3.Pop at beginning\n4.Pop at end\n5.Display Dqueue\n6.Exit\nEnter Your Choice =";
	        cin>>choice;
	        
	        switch(choice)
	        {
	                case 1 :if(deque.size()==DEQUESIZE)
	                                cout<<"\n\tDeque is Full";
	                        else 
	                        {
	                                cout<<"\nEnter value = ";
	                                cin>>val;
	                                deque.push_back(val);
	                        }        
	                break;
	                case 2 :if(deque.size()==DEQUESIZE)
	                                cout<<"\nDeque is Full";
	                        else 
	                        {
	                                cout<<"\nEnter value = ";
	                                cin>>val;
	                                deque.push_front(val);
	                        }        
	                break;
	                case 3 :if(deque.size()==0)  
	                                cout<<"\n\tDeque is Empty";
	                        else 
	                        {
	                                val=deque.front();
	                                cout<<"\nPoped Element = "<<val;
	                                deque.pop_front();
	                        }            
	                break;
	                case 4 :if(deque.size()==0)  
	                                cout<<"\n\tDeque is Empty";
	                        else 
	                        {
	                                val=deque.back();
	                                cout<<"\nPoped Element = "<<val;
	                                deque.pop_back();
	                        }            
	                break;
	                case 5 :if(deque.size()==0)
	                                cout<<"\n\tDeque is Empty";
	                        else 
	                        {
	                                showList(deque);
	                        }                   
	                break;
	                case 6 :exit=0;
	                break;
	                default : cout<<"\nWrong Choice !!!!!";
	                break;        
	        }
	}while(exit!=0);

return 0;	
}