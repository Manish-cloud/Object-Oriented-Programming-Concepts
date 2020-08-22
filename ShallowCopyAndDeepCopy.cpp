#include<iostream>
#include<cstdlib>
using namespace std;

class MyArray{
private:
    int size;
    int * ptr;

public:
    MyArray() = default;

    MyArray(int length){
        size = length;
        ptr = new int [size];
    }


    /*

    //  For DEEP COPY

    MyArray(const MyArray & ref){
        size = ref.size;
        ptr = new int [size];
    }

    const MyArray & operator= (const MyArray & ref){
        size = ref.size;
        ptr = new int [size];

        return *this;
    }

     */

    int getSize() const {
        return size;
    }

    void setSize(int size) {
        MyArray::size = size;
    }

    int *getPtr() const {
        return ptr;
    }

    void setPtr(int *ptr) {
        MyArray::ptr = ptr;
    }
};

int main(){

    MyArray * myArray = new MyArray(5);
//    Using copy constructor
//    MyArray * otherArray = new MyArray(*myArray);

    // Using Assignment operator
    MyArray otherArray;
    otherArray = *myArray;

    cout<<myArray->getPtr()<<endl;
    cout <<otherArray.getPtr();

    return EXIT_SUCCESS;
}