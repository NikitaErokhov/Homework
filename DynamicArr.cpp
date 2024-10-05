#include "DynamicArr.h"

const double DynamicArr::coeff_ = 2;

DynamicArr::DynamicArr() {
	arr_ = new double[capacity_];
}

DynamicArr::DynamicArr(size_t size, double elem) : size_(size)
	,capacity_(coeff_* size_)
	,arr_(new double[capacity_]) {
	for (size_t i = 0; i < size_; ++i) {
		arr_[i] = elem;
	}
}

DynamicArr::DynamicArr(const DynamicArr& rhs) {
	size_ = rhs.size_;
	capacity_ = rhs.capacity_;
	arr_ = new double[capacity_];
	for (size_t i = 0; i < size_; ++i) {
		arr_[i] = rhs.arr_[i];
	}
}

DynamicArr::~DynamicArr() {
	delete[] arr_;
}

size_t DynamicArr::size() const {
	return size_;
}

size_t DynamicArr::capacity() const {
	return capacity_;
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                            Домашнее задание на 05_10_24
                            Выполнил Ерохов Никита М.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

int DynamicArr::operator [](int index){
	return this->arr_[index];
}

DynamicArr& DynamicArr::operator = (const DynamicArr &otherarr) {
	this->size_ = otherarr.size_;
	if (this->arr_!=nullptr){
		delete[] this->arr_;
	}
	this->arr_ = new double[this->size_];

	for(int i = 0; i<this->size_;++i){
		this->arr_[i] = otherarr.arr_[i];
	}
	return *this;
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                            Домашнее задание на 05_10_24
                            Выполнил Ерохов Никита М.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void DynamicArr::push_back(double elem) {
	if (size_ == capacity_) {
		capacity_ = coeff_ * capacity_;
		double* tmp = new double[capacity_];
		for (size_t i = 0; i < size_; ++i) {
			tmp[i] = arr_[i];
		}
		delete[] arr_;
		arr_ = tmp;
	}
	arr_[size_++] = elem;
}