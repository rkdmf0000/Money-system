#define __H_WALLET__
#include "common_defination.h"
#include "money-relationship.h"

class wallet
{

private:
	
	friend human;
	UINT section_length;
	MONEY_TYPE* section;


public:
	void set_wallet();
	void add_a_money(MONEY_TYPE);
	void add_a_money(MONEY_TYPE,unsigned int);
	void remove_a_money(MONEY_TYPE);
	void remove_a_money(MONEY_TYPE,unsigned int);
};

