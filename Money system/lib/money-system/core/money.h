


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

