// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <stdio.h>


class base {
public:

	void show() { std::cout << "hello base" << std::endl; }
	void print() {}
	virtual void test()=0 {};

};

class hello : public base {

public:
	//void show();
	void print();
	void test() { std::cout << "hello test" << std::endl; }

};
/*
void hello::show()
{
	std::cout << "hello show" << std::endl;
}*/
void hello::print()
{
	std::cout << "hello print" << std::endl;
}
int main()
{
	hello h;
	h.show();
	h.print();
	h.test();
    return 0;
}

