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
	const UINT l = get_length();
	const UINT up = l + 1;
	MONEY_TYPE* dump;
	dump = new MONEY_TYPE[up+10];
	for (int i = 0; i < (int)l; i++) dump[i] = collector[i];
	
	delete[] collector;
	collector = dump;
	collector[l] = type;
	length = length + 1;

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