#include "MediaPlayer.hpp"

namespace AudioPlayer {
	
	void MusicPlayer::loadFile(const std::string& file) {
		fileName = file;
		std::cout << "Loaded audio file " << fileName << std::endl;
	}
	std::string MusicPlayer::getSongName() const {
		return fileName;
	}
	void MusicPlayer::play_file() {
		std::cout << "Now playing: " << getSongName() << std::endl;
	}
}