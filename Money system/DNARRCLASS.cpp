#include "DNARRCLASS.h"

template <typename T> DNARRCLASS<T>::DNARRCLASS() {
	this->length = 1; //non-zero�迭�� �ȵȴٴµ�
	this->target_index = 0; //ũ��� 1ĭ ������ 0����
	this->collector = new T[this->length]; //Lvalue �� �ʱ�ȭ 
};
template <typename T> void DNARRCLASS<T>::add(unsigned int num, T data) {

	if (num > this->length) {
		/////����� �ʰ��� ���//////
		//���纻 ����
		T* dump = new T[num];
		//�� ����
		for (int i = 0; i < this->length; i++) dump[i] = this->collector[i];
		//�� ä���
		for (int f = this->length; f < num; f++) dump[f] = 0;
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
	return *(this->collector + idx);
};


