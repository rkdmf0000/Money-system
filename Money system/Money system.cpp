#include <iostream>
#include "common_defination.h"
//#include "money-relationship.h"
//#include "DNARRCLASS.h"


const enum class MONEY_TYPE : unsigned int {
	CENT_10 = 10,
	CENT_25 = 25,
	CENT_50 = 50,
	DOLLAR_1 = 100,
	DOLLAR_5 = 500,
	DOLLAR_10 = 1000,
	DOLLAR_100 = 10000
};

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
	void __add(unsigned int, T);
	T& operator[] (unsigned int);
	const unsigned int size();
	void resize();
	void print();
};

template <typename T> DNARRCLASS<T>::DNARRCLASS(void) {
	this->length = 1; //non-zero�迭�� �ȵȴٴµ�
	this->target_index = 0; //ũ��� 1ĭ ������ 0����
	this->collector = new T[this->length]; //Lvalue �� �ʱ�ȭ 
};
template <typename T> DNARRCLASS<T>::~DNARRCLASS(void) {

};
template <typename T> void DNARRCLASS<T>::size_check() {
	
};

template <typename T> void DNARRCLASS<T>::__add(unsigned int num, T data) {

	if (num > this->length) {
		/////����� �ʰ��� ���//////
		//���纻 ����
		T* dump = new T[num+1];
		//�� ����
		for (unsigned int i = 0; i <= this->length; i++) dump[i] = this->collector[i];
		//�� ä���
		for (unsigned int f = this->length; f < num; f++) dump[f];
		//�� ����
		delete[] this->collector;
		//�� ��ü
		this->collector = dump;

		//�迭 ũ�Ⱑ ������������ ���� ������
		this->length = num;
		this->target_index = num + 1;
	};
	this->collector[num] = data;
};
template <typename T> T& DNARRCLASS<T>::operator[](unsigned int idx) {
	if (idx > this->target_index) {
		T* dump = new T[idx+1];
		for (unsigned int i = 0; i < this->target_index; i++) dump[i] = this->collector[i];
		for (unsigned int j = this->target_index; j < idx; j++) dump[j] = 0;
		this->length = idx;
		this->target_index = idx + 1;
	};
	return *(this->collector + idx);
};



template <typename T>
auto as_integer(T const value) -> typename std::underlying_type<T>::type
{
	return static_cast<typename std::underlying_type<T>::type>(value);
}


template <typename T> void DNARRCLASS<T>::print() {
	for (unsigned int i = 0; i <= this->length; i++) {
		std::cout << as_integer(this->collector[i]) << std::endl;
	}
};

int main()
{



    DNARRCLASS<MONEY_TYPE> fucker;
	fucker.__add(0, MONEY_TYPE::CENT_25);
	fucker.__add(4, MONEY_TYPE::CENT_25);
	fucker.__add(5, MONEY_TYPE::CENT_25);
	fucker.__add(6, MONEY_TYPE::CENT_25);
	fucker.__add(7, MONEY_TYPE::CENT_25);
	//fucker[0] = MONEY_TYPE::CENT_10;
	//fucker[10] = MONEY_TYPE::CENT_10;
	//fucker[100] = MONEY_TYPE::CENT_10;
	fucker.print();
    system("echo Please press any btn...");
    system("PAUSE > NUL");
    return 0;
}
