


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

