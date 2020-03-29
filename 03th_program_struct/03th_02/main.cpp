
#include <stdio.h>
#include "person.h"
#include "dog.h"

using A::Person;
using B::Dog;

int main(int argc, char** argv)
{
	Person per;
	per.setName("yhzhu");
	per.setAge(20);
	per.printInfo();
	A::printVersion();
	
	Dog dog;
	dog.setName("xiaogou");
	dog.setAge(1);
	dog.printInfo();
	B::printVersion();
	
	return 0;

}

