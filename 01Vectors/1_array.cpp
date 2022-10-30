
#include <iostream>
#include <array>

using namespace std;

int main()
{
    // array Declaration
    array <int, 10> arr1;

    // array Intialization
    array <int, 10> arr2 = {5,10,20,30};

    // methods
    cout<< "At " << arr2.at(2) << endl;     // out of boound safe
    cout<<"[] "<< arr2[2] <<endl;           //unsafe

    cout<<"front() "<<arr2.front()<<endl;   // return 1st elements
    cout<<"back() "<<arr2.back()<<endl;     // return last elements

    arr1.fill(0);                           // fill array with 0

    arr1.swap(arr2);                        // swap

    arr1.empty();                           //empty the array

    cout<<"Size is "<<arr2.size()<<endl;
    cout<<"max Size "<<arr2.max_size()<<endl;     // max size of array



    return 0;
}
