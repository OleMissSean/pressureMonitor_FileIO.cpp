// Sean Staz
// CSC 2134

// Program Pressure prints appropriate messages based
// on a pressure reading read from a file.  Processing
// continues until the plant is evacuated because of
// a pressure reading over 100. 

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main ()
{
  int  pressure;
  ifstream  data;
  data.open("pressure.d1.txt");
                                          
 while (pressure < 100)
 {
    data  >> pressure; 
	
	cout << "Pressure is okay." << endl; 
 }
 while (pressure >= 100)
 {
 cout << "Pressure has exceeded 100! Please evacute ASAP!" << endl;
}
    return 0;
}                                                                               
