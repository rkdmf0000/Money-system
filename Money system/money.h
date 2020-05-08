#define __H_MONEY__
#define __H_WALLET__
#include "common_defination.h"
#include "money-relationship.h"


/*
*	TITIE	: ���� ���� / MONEY_TYPE
*	DESC	: ���� ��ġ�� ������ �����ϴ� ��
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
*	TODO		: �� ���� / MONEY_BUKKET
*	DESC		: ���������� ���� �������� �������ִ� ��
*	REFERENCE	: 
				* wallet Ŭ�������� ������ ���� ���ͱ�� �ְų� ���µ� ���Ǿ��Ѵ�.
				* wallet Ŭ�������� ���� �������ֵ��� iterator �޼��带 �����ؾ��Ѵ�.
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

