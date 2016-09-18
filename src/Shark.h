#ifndef SHARK_H_
#define SHARK_H_

#include "FishAnimal.h"

class Shark: public FishAnimal {
public:
	Shark();
	virtual ~Shark();

	void swim();
};

#endif /* SHARK_H_ */
