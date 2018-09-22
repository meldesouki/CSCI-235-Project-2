/***********
Name: Merna Eldesouki
Assignment: CSCI 235, Fall 2018, Project 2
Date: September 25,2018
Description: This file creates a class PlayList. It has a set of songs which is based on the Set template and Song class. 
It can add, remove, and display songs in the playlist.
***********/

#include "PlayList.h"
#include <iostream>

PlayList::PlayList(){} //default constructor

PlayList::PlayList(const Song& a_song){ //parameterized constructor

	playlist_.add(a_song);
}

//Returns the number of songs in the playlist
int PlayList::getNumberOfSongs() const {

	return playlist_.getCurrentSize();
}

//Checks if playlist is empty
bool PlayList::isEmpty() const {

	return playlist_.isEmpty();
}

//Adds a song to the playlist if it's not already there
bool PlayList::addSong(const Song& new_song){

	return playlist_.add(new_song);
}

//Removes a song from the playlist
bool PlayList::removeSong(const Song& a_song){

	return playlist_.remove(a_song);
}

//Empties the playlist
void PlayList::clearPlayList(){

	playlist_.clear();
}

//Prints details of the playlist
void PlayList::displayPlayList() const{
	
	for (int i = 0; i < playlist_.getCurrentSize(); i++){

		std::cout << "* Title: " << playlist_.toVector()[i].getTitle() << " * " 
		<< "Author: " << playlist_.toVector()[i].getAuthor() << " * "
		<< "Album: " << playlist_.toVector()[i].getAlbum() <<" *" << std::endl;
	}

	std::cout << "End of playlist" << std::endl;
}
/*PLAYLIST_H_*/