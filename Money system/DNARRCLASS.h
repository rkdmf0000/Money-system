#include "common_defination.h"

template <typename T>
class DNARRCLASS
{
private:
	T* collector;
	unsigned int length;
	unsigned int target_index;
	void add(unsigned int, T);
public:
	DNARRCLASS();
	~DNARRCLASS();
	T& operator[] (unsigned int);
	const unsigned int size();
	void resize();
};

