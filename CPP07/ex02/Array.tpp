#ifndef  ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0)
{

}

template<typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{

}

template<typename T>
Array<T>::~Array()
{
	delete[](_arr);
}

template<typename T>
Array<T>::Array(const Array &copy) : _arr(new T[copy._size]), _size(copy._size)
{
	unsigned int i = 0;
	while(i < _size)
	{
		_arr[i] = copy._arr[i];
		i++;
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &copy)
{
	if(this != &copy)
	{

		if(_size != copy._size)
		{
			delete[] _arr;
			_arr = new T[_size];
			_size = copy._size;
		}

		unsigned int i = 0;
		while(i < _size)
		{
			_arr[i] = copy._arr[i];
			i++;
		}
	}
	return(*this);
}

template<typename T>
const T& Array<T>::operator[](unsigned int i) const
{
	if ( i >= _size )
		throw (OutOfBoundsException());
	return(_arr[i]);
}

template<typename T>
T& Array<T>::operator[](unsigned int i)
{
	if ( i >= _size )
		throw (OutOfBoundsException());
	return(_arr[i]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return(_size);
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return("Index out of bound");
}


#endif
