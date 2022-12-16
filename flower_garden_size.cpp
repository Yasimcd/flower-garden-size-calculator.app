// This program calculates the size of a rectangular flower garden in a nature center.
//Yasim Cruz
#include <iostream> 
using namespace std;

int main()
{
   int length = 0,         
          width = 0,          
          area;
          
   cout << "Answers the following question to calculate the square feet of your garden."<< endl;
   cout << "Enter garden length (in feet): ";
   cin  >> length;
   
   cout << "Enter garden width (in feet): ";
   cin  >> width; 
   
   area = length * width; 
   
   cout << "A " << length << " x " << width << "' garden has an area of " << area << " feet."<< endl;
   
  
   return 0;
}
