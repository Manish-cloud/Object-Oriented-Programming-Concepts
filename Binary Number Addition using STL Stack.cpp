/* 
 * File:   Binary Number Addition using STL Stack.cpp
 * Author: Manish
 *
 * Created on 24 September, 2018, 9:17 AM
 */

#include<iostream>
#include<stack>

using namespace std;

/*
 * 
 */
int main()
{
	stack <int> stack1,stack2,resultStack;
	char ch;
	
	do
	{
		int numberOfBits;
		int bit;
		cout << " Enter number of bits in First binary Number : ";
		cin >> numberOfBits;
		
		for(int i=0;i<numberOfBits;i++)
		{
			cout<<"Enter bit number "<<i+1<<" : ";
			cin>>bit;
			stack1.push(bit);
		}
		
		
		cout << " Enter number of bits in Second binary Number : ";
		cin >> numberOfBits;
		
		for(int i=0;i<numberOfBits;i++)
		{
			cout<<"Enter bit number "<<i+1<<" : ";
			cin>>bit;
			stack2.push(bit);
		}
		
		int carry=0;
		int bit1,bit2;
		while(stack1.size()>0 && stack2.size()>0)
                {
			bit1=stack1.top();
			bit2=stack2.top();
			stack1.pop();
			stack2.pop();
			
			bit=bit1+bit2+carry;
			
			if(bit==0)
			{
				resultStack.push(0);
				carry=0;
			}
			else if(bit==1)
			{
				resultStack.push(1);
				carry=0;
			}
                        /*Alternative for above two if conditions
                         * if(bit==0||bit==1)
                         * {
                         *      resultStack.push(bit);
                         *      carry=0;
                         * }
                         */
			else if (bit==2)
			{
				resultStack.push(0);
				carry=1;
			}
			else if (bit==3)
			{
				resultStack.push(1);
				carry=1;
			}
		}
		
		while(stack1.size()>0)
		{
			bit1=stack1.top();
                        bit=bit1+carry;
			stack1.pop();
			if(bit==0)
			{
				resultStack.push(0);
				carry=0;
			}
			else if(bit==1)
			{
				resultStack.push(1);
				carry=0;
			}
			else if (bit==2)
			{
				resultStack.push(0);
				carry=1;
			}
		}
		
		while(stack2.size()>0)
		{
			bit1=stack2.top();
                        bit=bit1+carry;
			stack2.pop();
                        if(bit==0)
			{
				resultStack.push(0);
				carry=0;
			}
			if(bit==1)
			{
				resultStack.push(1);
				carry=0;
			}
			else if (bit==2)
			{
				resultStack.push(0);
				carry=1;
			}
		}
		
		if(carry==1)
		{
			resultStack.push(1);
		}
                
		int size=resultStack.size();
		
                for(int i=0;i<size;i++)
		{
			cout<<resultStack.top()<<" ";
			resultStack.pop();
                }
               
		cout<<"Enter Y to continue : ";
		cin>>ch; 
	}while(ch=='y'||ch=='Y');
}