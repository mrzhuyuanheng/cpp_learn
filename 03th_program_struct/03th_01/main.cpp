
#include <stdio.h>
#include "person.h"
#include "dog.h"

int main(int argc, char** argv)
{
	Person per;
	per.setName("yhzhu");
	per.setAge(20);
	per.printInfo();

	Dog dog;
	dog.setName("xiaogou");
	dog.setAge(1);
	dog.printInfo();
	
	return 0;

}

