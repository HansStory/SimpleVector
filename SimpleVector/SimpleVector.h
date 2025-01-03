#pragma once

template<typename T>
class SimpleVector
{
public:
	SimpleVector();
	SimpleVector(int size);
	SimpleVector(const SimpleVector& other);
	~SimpleVector();

	void push_back(const T& value);
	void pop_back();

	void resize(int size);
	int size() const;
	int capacity() const;

	void sortData();

private:
	T* data = nullptr;
	int currentSize = 0;
	int currentCapacity = 10;
};

template<typename T>
SimpleVector<T>::SimpleVector() {
	data = new T[currentCapacity];
}

template<typename T>
SimpleVector<T>::SimpleVector(int size) {
	data = new T[size];
	currentCapacity = size;
}

template<typename T>
SimpleVector<T>::SimpleVector(const SimpleVector& other) {

}

template<typename T>
SimpleVector<T>::~SimpleVector() {
	delete[] data;
}

template<typename T>
void SimpleVector<T>::push_back(const T& value) {
	if (currentSize < currentCapacity)
	{
		data[currentSize] = value;
		currentSize++;
	}
	else
	{
		return;
	}
}

template<typename T>
void SimpleVector<T>::pop_back() {
	if (currentSize > 0)
	{
		//data[currentSize] = nullptr;
		currentSize--;
	}
	else
	{
		return;
	}
}

template<typename T>
void SimpleVector<T>::resize(int size) {

}

template<typename T>
int SimpleVector<T>::size() const {
	return currentSize;
}

template<typename T>
int SimpleVector<T>::capacity() const {
	return currentCapacity;
}

template<typename T>
void SimpleVector<T>::sortData() {

}