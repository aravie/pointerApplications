#pragma once
#include <initializer_list>
#include <cassert>
#include "utils.h"
#include <stdexcept>
namespace Basic {
	//this should be able to store any type of data
	template<typename T>
	class GArray {
	public:
		//typedefinations for valuation of T
		//creating alias
		using size_type = size_t;
		using value_type = T;
		using pointer = T*;
		using const_pointer = const T*;
		using reference = T&;
		using const_reference = const T&;
		//synthesizing default constructor by compiler
		GArray() = default;
		//constructor to fill the array with specific value
		GArray(size_type count, const_reference elem) {
			m_pBuffer = new T[count];
			for (int i = 0; i < count; ++i)
				m_pBuffer[i] = elem;
			m_Size = count;
		}
		//constructor to initialize array with list of elements
		GArray(std::initializer_list<value_type> list) {
			m_pBuffer = new T[list.size()];
			Copy(list.begin(), list.end(), m_pBuffer);
			m_Size = list_size();
		}
		//copy constructor
		GArray(const GArray &other) {

		}
		//move cosntructor
		GArray(GArray && other) {

		}
		//copy assignment
		GArray & operator = (const GArray &other) {

		}
		//move assignment
		GArray & operator = (GArray && other) {

		}
		//destructor
		~GArray() {
			delete[] m_pBuffer;
		}
		//function to add elements to an array
		void Add(const_reference elem) {

		}
		//function to insert element inside an array
		void Insert(size_type index, const_reference elem) {

		}
		//function to erase an element inside an array
		void Erase(size_type index) {

		}
		//function access limits of array
		const_reference Back() const {
			assert(!Empty());
			return m_pBuffer[m_Size];
		}
		const_reference Front() const {
			assert(!Empty());
			return m_pBuffer[0];
		}
		//support for subscript operator
		const_reference operator[](size_type index)const {
			assert(!Empty());
			return m_pBuffer[index];
		}
		//overload for this operator
		reference operator[](size_type index) {
			assert(!Empty());
			return m_pBuffer[index];
		}
		//access the elements to index; this will check for bounds; wrong arguments passed will throw an exception
		const_reference GetAt[](size_type index)const {
			if (index > m_Size) {
				throw std::runtime_error{"Bad index"};
			}
			return m_pBuffer[index];
		}
		reference GetAt[](size_type index) {
			if (index > m_Size) {
				throw std::runtime_error{ "Bad index" };
			}
			return m_pBuffer[index];
		}
		//finding if array is empty
		bool Empty()const {
			return m_Size == 0;
		}
		size_type GetSize()const {
			return m_Size;
		}
		void Clear() {
			delete[]m_pBuffer;
		}
		size_type Find(const_reference elem) {
			for (int i = 0; i < m_Size; ++i) {
				if (m_pBuffer[i] == elem)
					return i;
			}
			return -1;
		}
		//to make array compatible with c
		pointer GetRawPointer() {
			assert(!Empty());
			return m_pBuffer;
		}
		const_pointer GetRawPointer()const {
			assert(!Empty());
			return m_pBuffer;
		}
	private:
		//attributes of the class is pointer that would point to the dynamic array on the heap
		pointer *m_pBuffer{};
		size_type m_Size{};
	};
}