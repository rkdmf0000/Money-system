#include "money.h"

#include <stdio.h>
#include <iostream>
MONEY_BUKKET::MONEY_BUKKET(void) {
	this->length = 1;
	this->collector[this->length];
};
MONEY_BUKKET::~MONEY_BUKKET(void) {

};

const UINT MONEY_BUKKET::get_length() {
	return (this->length);
};
const MONEY_TYPE* MONEY_BUKKET::get_collector() {
	return (this->collector);
}

void MONEY_BUKKET::operator += (const MONEY_TYPE type) {	
	
	const UINT l = this->get_length();
	const UINT up = l + 1;
	MONEY_TYPE* dump = new MONEY_TYPE[l];
	dump = this->collector;		

	std::cout << 1 << ": " << this->collector << std::endl;
	delete[] this->collector;		
	this->collector = new MONEY_TYPE[up];
	std::cout << 2 << ": " << this->collector << std::endl;

	this->collector = dump;
	delete[] dump;
	//this->collector[up] = type;										
	this->length = up;
	std::cout << 3 << ": " << this->collector << std::endl;
	printf("Current Stack : %d\n", this->length);
};
void MONEY_BUKKET::operator-=(const MONEY_TYPE type) {

};


void MONEY_BUKKET::print_collector() {
	const UINT l = this->get_length();
	const MONEY_TYPE* x = this->get_collector();
	printf("Total Stack : %d\n", l);
	UINT i = 0;
	for (i = 0; i < l; i++) {

		MONEY_TYPE buffer = x[i];
		//printf("%d\n", buffer);
		//std::cout << static_cast<std::underlying_type<MONEY_TYPE>::type>(buffer) << std::endl;
		
	}
};