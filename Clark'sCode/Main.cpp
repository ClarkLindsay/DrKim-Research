#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

char j='a';
int main()
{
fstream arduino;
arduino.open("/dev/cu.usbmodem1451",ios::in | ios::out);
//Opening device file

if(!arduino)
cout<<"error";
arduino<<2;
arduino.clear();
if(arduino >> j)
cout << "Value received: " << j << '\n';
else if(arduino.eof())
cerr << "Premature EOF\n";
else if(arduino.bad())
cerr << "Attempt to read from device failed.\n";
else
cerr << "Logical I/O error.\n";
arduino.close();
return 0;
}
