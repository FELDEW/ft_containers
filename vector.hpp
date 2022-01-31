#pragma once

#include <memory>

namespace ft 
{
	template <class T,class allocator_type = std::allocator<T>>
	class vector 
	{
		private:
			size_t capacity;
			size_t size;
			void *array;
		public:
			explicit vector (const allocator_type& alloc = allocator_type());
	};
}