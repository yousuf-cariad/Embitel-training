//: C02:CallHello.cpp
// Call another program
#include <cstdlib> // Declare "system()"
#include<iostream>
using namespace std;
int main(int argc, char *argv[]) {
	char buf[20];
	sprintf(buf, "%s %s %s", "ls", " ", argv[2]);
	system(buf);
} ///:~
