#include "SetInterface.h"
#include "Set.h"
#include "Song.h"
#include "PlayList.h"
#include <iostream>

using namespace std;

int main(){

    //**********Test Song************//

    

    //instantiate 5 songs

    Song song1;

    song1.setTitle("Cherry Bomb");

    song1.setAuthor("NCT 127");

    song1.setAlbum("Cherry Bomb");

    

    Song song2("Boss", "NCT U", "Empathy");

    Song song3("The 7th Sense", "NCT U", "The 7th Sense");

    Song song4("We Go Up", "NCT Dream", "We Go Up");

    Song song5("My First and Last", "NCT Dream", "My First and Last");

    

    //output song information


    cout << "The first song is: " << song1.getTitle() << ", " << song1.getAuthor() << ", " << song1.getAlbum() << endl; 

    cout << "The second song is: " << song2.getTitle() << ", " << song2.getAuthor() << ", " << song2.getAlbum() << endl; 

    cout << "The third song is: " << song3.getTitle() << ", " << song3.getAuthor() << ", " << song3.getAlbum() << endl;  

    cout << "The fourth song is: " << song4.getTitle() << ", " << song4.getAuthor() << ", " << song4.getAlbum() << endl << endl;

     //************* Test PlayList*************//

    

    //instantiate PlayList and add Songs to it

    

    PlayList myPlayList(song1);

    myPlayList.addSong(song2);

    myPlayList.addSong(song3);

    myPlayList.displayPlayList();   

    cout << "Playlist now holds " << myPlayList.getNumberOfSongs() << " songs\n\n";

    

    myPlayList.addSong(song1);

    myPlayList.displayPlayList();   

    cout << endl;

    

    myPlayList.addSong(song4);

    

    myPlayList.displayPlayList(); 

    cout << endl;

    

    myPlayList.addSong(song5);

     myPlayList.displayPlayList();  

     cout << endl;

    

    

    myPlayList.removeSong(song2);

    myPlayList.displayPlayList();   

    cout << endl;

    

    myPlayList.removeSong(song3);   

    myPlayList.displayPlayList();  

    cout << endl;

    

 

    myPlayList.clearPlayList();

    myPlayList.displayPlayList();  

    cout << myPlayList.isEmpty() << endl; 

    

    



	return 0;
}