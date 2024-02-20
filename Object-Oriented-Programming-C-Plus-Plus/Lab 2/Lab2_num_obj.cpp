//Lab2_num_obj.cpp

//This Lab will ...

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //numerical 
    int int_example = 10000;
    float float_example = 2.0;
    double double_example = 2.0;

    //non-numerical
    char char_example = 'at32';
    bool bool_example = true;

    //sizeof returns the number of bytes (8 bits is equiavalent to 1 byte))
    cout << "int_example: " << sizeof(int_example) << endl;
    cout << "float_example: " << sizeof(float_example) << endl;
    cout << "double_example: " << sizeof(double_example) << endl;

    cout << "char_example: " << sizeof(char_example) << endl;
    cout << "bool_example: " << sizeof(bool_example) << endl;


}