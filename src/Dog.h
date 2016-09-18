#ifndef DOG_H_
#define DOG_H_

#include "ReptileAnimal.h"

class Dog: public ReptileAnimale {
public:
	Dog();
	virtual ~Dog();

	void walk();
	void speak();
};

#endif /* DOG_H_ */
