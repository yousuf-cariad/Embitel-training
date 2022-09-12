//: C02:CallHello.cpp
// Call another program
#include <cstdlib> // Declare "system()"
#include<iostream>
using namespace std;
int main(int argc, char *argv[]) {
	char buf[20];
	sprintf(buf, "%s %s %s %s %s", "ifconfig", " ", argv[2], " ", argv[3]);
	system(buf);
} ///:~
