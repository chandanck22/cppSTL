// Vector Container

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaration
    vector <int> v;
    cout<<"Size " << v.size()<<endl;

    // Intialization
    vector <int> v2 = {10,20,30};

    // methods
    cout<<"At " << v2.at(2)<<endl;                 // out of bound safe
    cout<<"[] " << v2[2]<<endl;                    // unsafe

    // inserting elements at the end of the vector
    v2.push_back(40);
    v2.push_back(50);
    v2.push_back(60);

    // to check values are added or not
    for (vector<int>::iterator i=v2.begin(); i!= v2.end(); i++)
    {
        cout<< *i <<" ";       
    }
    cout<<endl;

    // pop out the last element
    v2.pop_back();
    for (vector<int>::iterator i=v2.begin(); i!= v2.end(); i++)
    {
        cout<< *i <<" ";       
    }
    cout<<endl;

    //insert():-  inserts the element in vector before the position pointed by iterator
    for (vector<int>::iterator i=v2.begin(); i!= v2.end(); i++)
    {
        cout<< *i <<" ";       //for printing vector
    }
    cout<<endl;

    // pop_back():- remove the last element from the vector. It reduces the size of vector by one.
    v2.pop_back();

    // erase():- removes the element pointed by the iterator.
    vector<int>::iterator i = v2.begin();
    v2.erase(i);
    for (vector<int>::iterator i=v2.begin(); i!= v2.end(); i++)
    {
        cout<< *i <<" ";       
    }

    // erase all element except last element
    v2.erase(v2.begin(), v2.end() - 1);

    // swap():- interchanges two values of vectors
    v2.swap(v);
    
    // capacity():- no. of elements that can be inserted in the vector based on the memory allocated too the vector
    cout<<endl <<"capacity "<<v2.capacity()<<endl;



    return 0;

}
