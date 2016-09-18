#ifndef ALLIGATOR_H_
#define ALLIGATOR_H_

#include "FishAnimal.h"
#include "ReptileAnimal.h"

class Alligator: public ReptileAnimale, public FishAnimal {
public:
	Alligator();
	virtual ~Alligator();

	void walk();
	void speak();
	void swim();
};

#endif /* ALLIGATOR_H_ */
