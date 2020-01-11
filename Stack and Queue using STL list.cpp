/* 
 * File:   Stack and Queue using STL list.cpp
 * Author: Manish
 *
 * Created on 1 October, 2018, 9:52 AM
 */
#include<cstdlib>
#include<iostream>
#include<iterator>
#include<list>

#define STACKSIZE 10
#define QUEUESIZE 10

using namespace std;

void showList( list < int > & g)
{
        list <int> :: iterator it ;
        it=g.end();
        do
        {
                --it;
                cout<<"\n"<< *it ;
        }while (it != g.begin() );
}

void showList1( list < int > g)
{
        list <int> :: reverse_iterator it ;
        it=g.rbegin();
        do
        {
                cout<<"\n"<< *it ;
                it++;
        }while (it != g.rend() );
}

void showList2( list < int > g)
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
    list <int> stack;
    list <int> queue;
    char ch;
    int choice,val;
    int exit=1;
	
	do
	{   
            cout<<"\n-----------------------------------------------------------\n";
            cout<<"Enter Your Choice\n1]TO PERFORM OPERATION ON STACK\n2]TO PERFORM OPERATION ON QUEUE\n3]TO EXIT\n";
	        cin>>choice;
	        {
	        switch(choice)
	        {
                    case 1:
                    {
                            do
                            {
                                    cout<<"\n\tStack Operations (MAX SIZE =10)";
                                    cout<<"\n1.Push \n2.Pop \n3.Display Stack\n4.Exit\nEnter Your Choice =";
                                    cin>>choice;
                                    switch(choice)
                                    {
                                            case 1 :if(stack.size()==STACKSIZE)
                                                            cout<<"\n\tStack is Full";
                                                    else 
                                                    {
                                                            cout<<"\nEnter value = ";
                                                            cin>>val;
                                                            stack.push_back(val);
                                                    }        
                                            break;
                                            case 2 :if(stack.size()==0)  
                                                            cout<<"\n\tStack is Empty";
                                                    else 
                                                    {
                                                            val=stack.back();
                                                            cout<<"\nPoped Element = "<<val;
                                                            stack.pop_back();
                                                    }            
                                            break;
                                            case 3 :if(stack.size()==0)
                                                            cout<<"\n\tStack is Empty";
                                                    else 
                                                    {
                                                            showList(stack);
                                                    }                   
                                            break;
                                            case 4 :exit=0;
                                            break;
                                            default : cout<<"\nWrong Choice !!!!!";
                                            break;        
                                    }
                            }while(exit!=0);
                            exit=1;
                    }
                    break;
                    
                    case 2 :
                    {
                          do
                            {
                                    cout<<"\n\tQueue Operations (MAX SIZE =10)";
                                    cout<<"\n1.Push \n2.Pop \n3.Display Queue\n4.Exit\nEnter Your Choice =";
                                    cin>>choice;
                                    switch(choice)
                                    {
                                            case 1 :if(queue.size()==QUEUESIZE)
                                                            cout<<"\n\tQueue is Full";
                                                    else 
                                                    {
                                                            cout<<"\nEnter value = ";
                                                            cin>>val;
                                                            queue.push_back(val);
                                                    }        
                                            break;
                                            case 2 :if(queue.size()==0)  
                                                            cout<<"\n\tQueue is Empty";
                                                    else 
                                                    {
                                                            val=queue.front();
                                                            cout<<"\nPoped Element = "<<val;
                                                            queue.pop_front();
                                                    }            
                                            break;
                                            case 3 :if(queue.size()==0)
                                                            cout<<"\n\tQueue is Empty";
                                                    else 
                                                    {
                                                            showList2(queue);
                                                    }                   
                                            break;
                                            case 4 :exit=0;
                                            break;
                                            default : cout<<"\nWrong Choice !!!!!";
                                            break;        
                                    }
                            }while(exit!=0);
                            exit=1;
                    }
                    break;

                    case 3 :exit=0;
                    break;

                    default : cout<<"\nWrong Choice !!!!!";
                    break;
	        } 
            }   
        }while(exit!=0);
}