#pragma once

#include <vector>

namespace ft {
	template<class T, class container_type = std::vector<T>>  // to change
	class stack {
		private:
			container_type container;
		public:
			explicit stack (const container_type& ctnr = container_type()) : container(ctnr) {}

			~stack() {};

			bool empty() const {
				return (this->container.empty());
			}

			void pop() { 
				this->container.pop_back();
			}

			void push (const T& val) {
				this->container.push_back(val);
			}

			size_t size() const {
				return (this->container.size());
			}

			T& top() {
				return (this->container.back());
			}

			const T& top() const {
				return (this->container.back());
			}

			friend bool operator== (const stack<T,container_type>& lhs, const stack<T,container_type>& rhs) {
				return(lhs.container == rhs.container);
			}

			friend bool operator!= (const stack<T,container_type>& lhs, const stack<T,container_type>& rhs) {
				return(lhs.container != rhs.container);
			}

			friend bool operator<  (const stack<T,container_type>& lhs, const stack<T,container_type>& rhs) {
				return(lhs.container < rhs.container);
			}

			friend bool operator<= (const stack<T,container_type>& lhs, const stack<T,container_type>& rhs) {
				return(lhs.container <= rhs.container);
			}

			friend bool operator>  (const stack<T,container_type>& lhs, const stack<T,container_type>& rhs) {
				return(lhs.container > rhs.container);
			}

			friend bool operator>= (const stack<T,container_type>& lhs, const stack<T,container_type>& rhs) {
				return(lhs.container >= rhs.container);
			}
	};
}