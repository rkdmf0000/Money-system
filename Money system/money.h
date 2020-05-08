#define __H_MONEY__
#define __H_WALLET__
#include "common_defination.h"
#include "money-relationship.h"


/*
*	TITIE	: 돈의 종류 / MONEY_TYPE
*	DESC	: 돈의 가치와 종류를 설정하는 곳
*/
const enum class MONEY_TYPE : unsigned int{
	CENT_10 = 10,
	CENT_25 = 25,
	CENT_50 = 50,
	DOLLAR_1 = 100,
	DOLLAR_5 = 500,
	DOLLAR_10 = 1000,
	DOLLAR_100 = 10000
};

/*
*	TODO		: 돈 묶음 / MONEY_BUKKET
*	DESC		: 여러종류의 돈을 묶음으로 가지고있는 곳
*	REFERENCE	: 
				* wallet 클레스에서 지갑의 돈을 뭉터기로 넣거나 뺴는데 사용되야한다.
				* wallet 클레스에서 쉽게 읽을수있도록 iterator 메서드를 제공해야한다.
*/
class MONEY_BUKKET {
public:
	MONEY_BUKKET(void);
	~MONEY_BUKKET(void);
	void operator += (const MONEY_TYPE);
	void operator -= (const MONEY_TYPE);
	const UINT get_length();
	const MONEY_TYPE* get_collector();
	void print_collector();

private:
	UINT length = 1;
	MONEY_TYPE* collector;


};

