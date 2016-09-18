#ifndef REPTILEANIMAL_H_
#define REPTILEANIMAL_H_

class ReptileAnimale {
public:
	virtual ~ReptileAnimale(){};

	virtual void walk() = 0;
	virtual void speak() = 0;
};

#endif /* REPTILEANIMAL_H_ */
