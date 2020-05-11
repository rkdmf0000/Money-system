#include "DNARRCLASS.h"
#include <iostream>

template <typename T> typename std::underlying_type<T>::type as_integer(T const value)
{
	//if (!value) return value;
	return static_cast<typename std::underlying_type<T>::type>(value);
}



template <typename T> DNARRCLASS<T>::DNARRCLASS(void) {
	this->length = 1; //non-zero배열은 안된다는데
	this->target_index = 0; //크기는 1칸 시작은 0부터
	this->collector = new T[this->length]; //Lvalue 로 초기화 
};
template <typename T> DNARRCLASS<T>::~DNARRCLASS(void) {

};
template <typename T> void DNARRCLASS<T>::size_check() {

};

template <typename T> void DNARRCLASS<T>::add(unsigned int num, T data) {

	if (num > this->length) {
		/////사이즈가 초과된 경우//////
		//복사본 생성
		T* dump = new T[num + 1];
		//값 복사
		for (unsigned int i = 0; i <= this->length; i++) dump[i] = this->collector[i];
		//빈값 채우기
		for (unsigned int f = this->length; f < num; f++) dump[f];
		//값 제거
		delete[] this->collector;
		//값 대체
		this->collector = dump;

		//배열 크기가 점프했음으로 직접 정의함
		this->length = num;
		this->target_index = num + 1;
	};
	this->collector[num] = data;
};
template <typename T> T& DNARRCLASS<T>::operator[](unsigned int idx) {
	if (idx > this->target_index) {
		T* dump = new T[idx + 1];
		for (unsigned int i = 0; i < this->target_index; i++) dump[i] = this->collector[i];
		for (unsigned int j = this->target_index; j < idx; j++) dump[j];
		this->length = idx;
		this->target_index = idx + 1;
	};
	return *(this->collector + idx);
};


template <typename T> void DNARRCLASS<T>::print() {
	for (unsigned int i = 0; i <= this->length; i++) {
		std::cout << as_integer(this->collector[i]) << std::endl;
	}
};

