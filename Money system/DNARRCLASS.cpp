#include "DNARRCLASS.h"

template <typename T> DNARRCLASS<T>::DNARRCLASS() {
	this->length = 1; //non-zero배열은 안된다는데
	this->target_index = 0; //크기는 1칸 시작은 0부터
	this->collector = new T[this->length]; //Lvalue 로 초기화 
};
template <typename T> void DNARRCLASS<T>::add(unsigned int num, T data) {

	if (num > this->length) {
		/////사이즈가 초과된 경우//////
		//복사본 생성
		T* dump = new T[num];
		//값 복사
		for (int i = 0; i < this->length; i++) dump[i] = this->collector[i];
		//빈값 채우기
		for (int f = this->length; f < num; f++) dump[f] = 0;
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
	return *(this->collector + idx);
};


