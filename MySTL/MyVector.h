
template<class _T>
class myVector {

	using pointer = _T*;

private:                         
	pointer __free = nullptr; // pointer to the first free element in the allocated space
	pointer	__elem = nullptr; // pointer to the first element in the allocated space
	pointer __last = nullptr; // pointer to the next one after the end of allocated space
	

public:
	myVector(): __free(nullptr), __elem(nullptr),__last(nullptr){}

	myVector(const myVector &);

};
