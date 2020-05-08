#define __H_MONEY__
#define __H_WALLET__
#include "common_defination.h"
#include "money-relationship.h"

const enum class MONEY_TYPE : int{
	CENT_10 = 10,
	CENT_25 = 25,
	CENT_50 = 50,
	DOLLAR_1 = 100,
	DOLLAR_5 = 500,
	DOLLAR_10 = 1000,
	DOLLAR_100 = 10000
};