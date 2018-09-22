/***********
Name: Merna Eldesouki
Assignment: CSCI 235, Fall 2018, Project 2
Date: September 25,2018
Description: This file makes a template called Set which can store things of an
arbitrary ItemType. It does not allow for duplicate items to be stored.
***********/

template<class ItemType>
Set<ItemType> :: Set(){ //initializing values
		
	item_count_ = 0;
	max_items_ = DEFAULT_SET_SIZE;
}
	
//Returns number of items in the set
template <class ItemType>
int Set<ItemType>::getCurrentSize() const {

	return item_count_;
}

//Checks if set is empty
template <class ItemType>
bool Set<ItemType>::isEmpty() const {

	return item_count_ == 0;
}

//Adds items to set
template <class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry){

	if ((item_count_ < max_items_) && (contains(newEntry) == 0)) { //If there is space and newEntry is not a duplicate, then add it to items_.

		items_[item_count_] = newEntry;
		item_count_ ++;
		return true;				
	}

	else {

		return false;
	}
}

//Removes items from set
template <class ItemType>
bool Set<ItemType>::remove(const ItemType& newEntry) {

	for (int i = 0; i < item_count_; i++){ //Checks the array for the desired entry. If it is found, 
											//then move the last item to the current index  and delete the last entry
		if (items_[i] == newEntry){

			item_count_--;
			items_[i] = items_[item_count_];
			return true;
		}
	}

	return false;
}

//Clears set by setting the number of items to 0
template <class ItemType>
void Set<ItemType>::clear(){

	item_count_ = 0;
}

//Looks for an entry in the set
template <class ItemType>
bool Set<ItemType>::contains(const ItemType& anEntry) const{

	return getIndexOf(anEntry) > -1;
}

//Initializes a vector and fills it with elements from items_
template <class ItemType>
std::vector<ItemType> Set<ItemType> ::toVector() const {

	std::vector<ItemType> vec;
	for (int i = 0; i < item_count_; i++){
		vec.push_back(items_[i]);
	}

	return vec;
}

//Loops through items_ to find the index of an item
template <class ItemType>
int Set<ItemType>::getIndexOf(const ItemType& target) const {

	bool found = false;
	int result = -1; //Initialize result with -1 because there will never be an item with an index of -1

	// If the item has not been found yet and the end of items_ is not reached yet, keep looking
	for (int i = 0; ((found == false) && (i < item_count_)); i++){ 
			
		if(items_[i] == target){

			found = true;
			result = i;
		}
	}
	return result;
}
/*SET_H_ */