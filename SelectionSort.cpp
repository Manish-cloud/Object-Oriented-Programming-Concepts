/* 
 * File:   SelectionSort.cpp
 * Author: Manish
 *
 * Created on 28 September, 2018, 9:18 AM
 */

#include <cstdlib>
#include <iostream>
#define SIZE 10
using namespace std;

template <class X>

//class number
//{
//	private:X a[SIZE];
//		int size;
//		
//	public:void get()
//	       {
//			cout<<"\nEnter number of elements =";
//			cin>>size;
//			for(int i=0;i<size;i++)
//			cin>>a[i];
//	       }
//		
//  	       void put()
//	       {
//		 	cout<<"Entered elements are =";
//			for(int i=0;i<size;i++)
//			cout<<"\t"<<a[i]<<"\t";
//			cout<<"\n";
//	       }		
//
//	       number()
//	       {
//		 	size=0;
//		 	a[SIZE]={0};
//	       }
//               
//               ~number()
//	       {
//		 	size=0;
//		 	a[SIZE]={0};
//	       }
//	       
//	       number(X ar[],int s)
//	       {
//	       		size=s;
//	       		for(int i=0;i<size;i++)
//	       		a[i]=ar[i];
//	       
//	       }
//	       
//	       void sort()
//	       {
//	       		int i,j,min;
//	       		X temp;
//	       		
//	       		for(i=0;i<size;i++)
//	       		{
//	       			min=i;
//	       			for(j=i+1;j<size;j++)
//	       			{
//					if(a[min]>a[j])
//					min=j;
//	       			}
//	       			
//	       			temp=a[i];
//	       			a[i]=a[min];
//	       			a[min]=temp;
//	       		}
//	       }
//	       
//
//};
//
//int main()
//{
//	int ar1[5]={22 , 11 , 44 , 55 , 33};
//	number<int>n1(ar1,5); 
//	n1.put();
//	n1.sort();
//	cout<<"\n------------------------";
//	cout<<"\nAfter selection sort\n";
//	cout<<"------------------------\n";
//	n1.put();
//	
//	/*float ar2[5]={1.1,2.2,3.3,4.4,5.5};
//	number<float>n2(ar2,5);
//	n2.put();
//	*/
//}	       


class number
{
	private:X a[SIZE];
		int size;
		
	public:void get()
	       {
			cout<<"\nEnter number of elements =";
			cin>>size;
			for(int i=0;i<size;i++)
			cin>>a[i];
	       }
		
  	       void put()
	       {
		 	cout<<"Entered elements are =";
			for(int i=0;i<size;i++)
			cout<<"\t"<<a[i]<<"\t";
			cout<<"\n";
	       }		

	       number()
	       {
		 	size=0;
		 	a[SIZE]={0};
	       }
               
               ~number()
	       {
		 	size=0;
		 	a[SIZE]={0};
	       }
	       
	       void sort()
	       {
	       		int i,j,min;
	       		X temp;
	       		
	       		for(i=0;i<size;i++)
	       		{
	       			min=i;
	       			for(j=i+1;j<size;j++)
	       			{
					if(a[min]>a[j])
					min=j;
	       			}
	       			
	       			temp=a[i];
	       			a[i]=a[min];
	       			a[min]=temp;
	       		}
	       }
};

int main()
{
    number <int> n1;
    number <float> n2;
    int exit=0;
    int choice;
    do
    {
        cout<<"Enter :\n1]To perform operation on integer type data\n2]To perform operations on float type data\n3]To exit\nchoice = ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                n1.get();
                n1.put();
                n1.sort();
                cout<<"\n-------------------------\nAfter selection Sort\n-------------------------\n";
                n1.put();
                break;
            case 2:
                n2.get();
                n2.put();
                n2.sort();
                cout<<"\n-------------------------\nAfter selection Sort\n-------------------------\n";
                n2.put();
                break;
            case 3:
                exit=1;
                break;
            default:
                cout<<"\nWrong Choice!!!!!!\n";
                break;
        }
    }while(exit==0);
}	       
