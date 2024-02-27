//Lab4_num_obj.cpp

//This Lab will ...

#include <iostream>
#include <cstdlib>
using namespace std;




 //int sumOfThree(int x,int y,int z);
 //int x = 2;
 //int y = 3;
 //int z = 5;

 int sumOfThree(int x, int y, int z)
 {
  return(x + y + z);
 }

 double divsion(double x, double y)
 {
    return(x/y);
 }



//string select(string func_type)
//{
    

  //  return T;
//}


//template <typename T>
 //void myPrint(string func_type, T output)
 //cout << select(func_type) << output << endl;

int main()
{
 int a = 2;
 int b = 3;
 int c = 5;

 int sum_out = sumOfThree(a,b,c);
 cout << "sum: " << sum_out << endl;
  
 double dividend = 12345.1;
 double divisor = 2346.6;

 double div_out = divsion(dividend,divisor);
cout << "division: " << div_out <<endl;

bool is_greater_out  = isGreaterThan(div_out,sum_out);
cout << "comparison: "<< is_greater_out;
//myPrint("comparison: ", is_greater_out);


 
 //cout << g;
 
 
 
 //cout << e;
 
 return 0;
}