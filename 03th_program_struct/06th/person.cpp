
//#include <stdio.h>
#include <iostream>
#include "person.h"

using namespace std;

namespace A {

void Person::setName(char *name)
{
	this->name = name;
}

int Person::setAge(int age)
{
	if (age < 0 || age > 150)
	{
		this->age = 0;
		return -1;
	}
	this->age = age;
	return 0;
}

void Person::printInfo(void)
{
//	printf("name = %s, age = %d, work = %s\n", name, age, work);
	std::cout <<"name = " << name<<" age = " << age<<" work = " << std::endl;
}

void printVersion(void)
{
//	printf("Person v1, by weidongshan\n");
	std::cout <<"Person v2, by yhzhu" << std::endl;
}

}
