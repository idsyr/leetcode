#include <iostream>
#include <cstdlib>
#include <cstring>

class MyCircularDeque {
	int* storage_;
	int* front_;
	int* back_;
	int* front_end_;
	int* back_end_;
	int sz_;
	int max_sz_;
private:
	void move_ptr_backward(int *&ptr){
		ptr = (ptr == back_end_)? front_end_ : ptr+1;
	}
	void move_ptr_forward(int *&ptr){
		ptr = (ptr == front_end_)? back_end_ : ptr-1;
	}
public:
	MyCircularDeque(int k) {
		int el_num = k+1;
		size_t alloc_sz = sizeof(int) * el_num;
		
		storage_ = reinterpret_cast<int*>(std::malloc(alloc_sz));
		std::memset(storage_, -1, alloc_sz);
		
		front_ = back_ = (storage_ + el_num/2);
		
		front_end_ = storage_;
		back_end_ = storage_ + k;
		
		sz_ = 0;
		max_sz_ = k;
	}
  
	bool insertFront(int value) {
		if(sz_ == max_sz_) return false;
		if(sz_ != 0) move_ptr_forward(front_);
		*front_ = value;
		++sz_;
		return true;
	}
  
	bool insertLast(int value) {
		if(sz_ == max_sz_) return false;
		if(sz_ != 0) move_ptr_backward(back_);
		*back_ = value;
		++sz_;
		return true;
	}
	
	bool deleteFront() {
		if(sz_ == 0) return false;
		*front_ = -1;
		--sz_;
		if(sz_ != 0) move_ptr_backward(front_);
		return true;
	}
    
	bool deleteLast() {
		if(sz_ == 0) return false;
		*back_ = -1;
		--sz_;
		if(sz_ != 0) move_ptr_forward(back_);
		return true;
	}
    
	int getFront() {
		return *front_;
	}
    
	int getRear() {
		return *back_;
	}
    
	bool isEmpty() {
		return sz_ == 0;
	}
  
	bool isFull() {
		return sz_ == max_sz_;
	}
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
