#define __H_HUMAN__
#define __H_WALLET__
#include "common_defination.h"
#include "money-relationship.h"

class human
{
private:
	static UINT human_length;
	static UINT human_id_book_cp[];
	static UINT human_id_book[];
	
	CP name;
	UINT id;
	//wallet h_wallet;


public:
	static human* add(CP);
	static bool remove(UINT);
	
	//void set_wallet(wallet* wallet);
	CP get_name(void);
	UINT get_id(void);
	
};


