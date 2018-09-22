/***********
Name: Merna Eldesouki
Assignment: CSCI 235, Fall 2018, Project 2
Date: September 25,2018
Description: This file creates a class PlayList. It has a set of songs which is based on the Set template and Song class. 
It can add, remove, and display songs in the playlist.
***********/
#ifndef PLAYLIST_H_
#define PLAYLIST_H_

#include "Song.h"
#include "Set.h"

class PlayList{

public:

	PlayList(); //default constructor

	PlayList(const Song& a_song); //parameterized constructor
	
	/** Gets the current number of songs in the playlist.
    @return The integer number of songs currently in the playlist. */
	
	int getNumberOfSongs() const;

	/** Checks whether this playlist is empty.
    @return True if the playlist is empty, or false if not. */
	
	bool isEmpty() const;

	/** Adds a song to the playlist
	@pre The song is not already a part of the playlist
	@param new_song The song that would be added
	@post The song would be added to the playlist*/
	
	bool addSong(const Song& new_song);

	/** Removes a song from the playlist
	@param a_song The song that would be removed
	@post The song would be removed to the playlist*/
	bool removeSong(const Song& a_song);

	/** Removes all songs from the playlist
	@post The playlist is empty*/
	void clearPlayList();

	/** Displays all of the songs currently in the playlist
	@post All the songs in the playlist should be printed on screen*/
	void displayPlayList() const;

private:

	Set<Song> playlist_;
};

#endif /*PLAYLIST_H_*/