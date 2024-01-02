#include "MediaPlayer.hpp"

using namespace MediaPlayer;

MPlayer player;

int main(){

	// load a file
	player.loadFile("Queentress.mp3");

	std::cout << "Starting " << player.getSongName() << std::endl;
	
	// settings
	player.setPlaybackSpeed(1.0f);
	player.setVolume(100);
	player.setState(player.Plying);

	std::cout << "Playback speed: " << player.getPlaybackSpeed() << std::endl;
	std::cout << "Set volume by user: " << player.getVolume() << "%" << std::endl;
	std::cout << "Current state: " << player.getState() << std::endl;

	return 0;
}