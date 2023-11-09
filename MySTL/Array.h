#pragma once
#include<iostream>

#if defined(_MSC_VER)
#define _STL_MY_UNREACHABLE() __assume(0)
#elif defined(__GNUC__)
#define _STL_MY_UNREACHABLE() __builtine_unreachable()
#endif

using namespace std;

template<class _T,size_t _N>
class Array {



	using iterator = _T*;
	using const_iterator = _T const*;
	using value_type = _T;

	_T _M_element[_N];

public :
	_T& operator[](size_t i) noexcept
	{
		return _M_element[i];
	}

	_T const & operator[](size_t i) const noexcept
	{
		return _M_element[i];
	}

	_T& at(size_t i) 
	{
		if (i >= _N) throw runtime_error("out_of_range");
		return _M_element[i];
	}

	_T const & at(size_t i) const
	{
		if (i >= _N) throw runtime_error("out_of_range");
		return _M_element[i];
	}

	size_t size() noexcept
	{
		return _N;
	}

	_T* begin() noexcept
	{
		return _M_element;
	}
	 
	_T* end() noexcept
	{
		return _M_element + _N;
	}

	_T const*  begin() const noexcept
	{
		return _M_element;
	}

	_T const* end() const noexcept
	{
		return _M_element + _N;
	}

	_T* data() noexcept
	{
		return _M_element;
	}

	_T const* data() const  noexcept
	{
		return _M_element;
	}

	_T const & front() noexcept
	{
		return _M_element[0];
	}

	_T const & back() noexcept
	{
		return _M_element[_N - 1];
	}

	_T& front() const noexcept
	{
		return _M_element[0];
	}

	_T& back() const noexcept
	{
		return _M_element[_N - 1];
	}

	void fill(_T const &value) noexcept(noexcept(_M_element[0] = value))
	{
		for (auto &i : _M_element)
			i = value;
	}


};

//特化针对创建array长度为0时处理
template<class _T>
class Array<_T,0> {

	using iterator = _T*;
	using const_iterator = _T const*;
	using value_type = _T;

	_T _M_element[0];

	_T& operator[](size_t i) noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T const& operator[](size_t i) const noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T& at(size_t i)
	{
		throw runtime_error("out_of_range");
	}

	_T const& at(size_t i) const
	{
		throw runtime_error("out_of_range");
	}

	size_t size() noexcept
	{
		return 0;
	}

	_T* begin() noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T* end() noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T const* begin() const noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T const* end() const noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T* data() noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T const* data() const  noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T const& front() noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T const& back() noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T& front() const noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	_T& back() const noexcept
	{
		_STL_MY_UNREACHABLE();
	}

	void fill(_T const& value) noexcept(noexcept(_M_element[0] = value))
	{}

};


