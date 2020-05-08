#include "money.h"

MONEY_BUKKET::MONEY_BUKKET(void) {
	this->length = 1;
	this->collector[this->length];
};
MONEY_BUKKET::~MONEY_BUKKET(void) {

};

const UINT MONEY_BUKKET::get_length() {
	return this->length;
};

void MONEY_BUKKET::operator+=(const MONEY_TYPE type) {
	//UINT length = (this->get_length() == 0 ? 1 : this->get_length());
	//MONEY_TYPE dump[this->get_length()];

};
void MONEY_BUKKET::operator-=(const MONEY_TYPE type) {

};