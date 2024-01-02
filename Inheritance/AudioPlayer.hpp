#pragma once
#include "MediaPlayer.hpp"

namespace AudioPlayer {
	class MusicPlayer {
	private:
		std::string fileName;
		std::string songName;
	public:
		void loadFile(const std::string& fileName);
		[[nodiscard]] std::string getSongName() const;
		void play_file();
	};
}