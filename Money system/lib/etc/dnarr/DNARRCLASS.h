#include "typedefs.h"

template <typename T>
class DNARRCLASS
{
private:
	T* collector;
	unsigned int length;
	unsigned int target_index;
	void size_check();
public:
	DNARRCLASS(void);
	~DNARRCLASS(void);
	void add(unsigned int, T);
	T& operator[] (unsigned int);
	const unsigned int size();
	void resize();
	void print();
};