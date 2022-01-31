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
		// CONSTRUCTS
			explicit vector (const allocator_type& alloc = allocator_type());
			explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
        	vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());
			vector (const vector& x);
			~vector();
		// ASSIGN
			template <class InputIterator>
  			void assign (InputIterator first, InputIterator last);
			void assign (size_type n, const value_type& val);
		// AT
			T& at (size_type n);
			const T& at (size_type n) const;
		// BACK
		    T& back();
			const T& back() const;
		// BEGIN
			iterator begin();
			const_iterator begin() const;
		// CAPACITY
			size_type capacity() const;
		// CLEAR
			void clear();
		// EMPTY
			bool empty() const;
		// END
		    iterator end();
			const_iterator end() const;
		// ERASE
			iterator erase (iterator position);
			iterator erase (iterator first, iterator last);
		// FRONT
			reference front();
			const_reference front() const;
		// GET_ALLOCATOR
			allocator_type get_allocator() const;
		// INSERT
			iterator insert (iterator position, const value_type& val);
			void insert (iterator position, size_type n, const value_type& val);
			template <class InputIterator>
    		void insert (iterator position, InputIterator first, InputIterator last);
		// MAX_SIZE
			size_type max_size() const;
		// ==
			vector& operator= (const vector& x);
		// []
			reference operator[] (size_type n);
			const_reference operator[] (size_type n) const;
		// POP_BACK
			void pop_back();
		// PUSH_BACK
			void push_back (const value_type& val);
		// RBEGIN
			reverse_iterator rbegin();
			const_reverse_iterator rbegin() const;
		// REND
			reverse_iterator rend();
			const_reverse_iterator rend() const;
		// RESERVE
			void reserve (size_type n);
		// RESIZE
			void resize (size_type n, value_type val = value_type());
		// SIZE
			size_type size() const;
		// SWAP
			void swap (vector& x);
		// RELATIONAL_OPERATORS
			friend bool operator== (const vector<T,allocator_type>& lhs, const vector<T,allocator_type>& rhs) {
			//	return(lhs.container == rhs.container);
			}

			friend bool operator!= (const vector<T,allocator_type>& lhs, const vector<T,allocator_type>& rhs) {
			//	return(lhs.container != rhs.container);
			}

			friend bool operator<  (const vector<T,allocator_type>& lhs, const vector<T,allocator_type>& rhs) {
			//	return(lhs.container < rhs.container);
			}

			friend bool operator<= (const vector<T,allocator_type>& lhs, const vector<T,allocator_type>& rhs) {
			//	return(lhs.container <= rhs.container);
			}

			friend bool operator>  (const vector<T,allocator_type>& lhs, const vector<T,allocator_type>& rhs) {
			//	return(lhs.container > rhs.container);
			}

			friend bool operator>= (const vector<T,allocator_type>& lhs, const vector<T,allocator_type>& rhs) {
			//	return(lhs.container >= rhs.container);
			}
		// SWAP
  			friend void swap (vector<T,allocator_type>& x, vector<T,allocator_type>& y);


	};
}