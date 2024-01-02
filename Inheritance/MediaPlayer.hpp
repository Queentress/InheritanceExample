#pragma once
#include <iostream>
#include "AudioPlayer.hpp"

namespace MediaPlayer {
	class MPlayer : public AudioPlayer::MusicPlayer {
	public:
		enum PlayerState
		{
			Plying = 1,
			Paused = 2,
			Stopped = 3
		};

		[[nodiscard]] float getPlaybackSpeed() {
			return playerstruct.playback_speed;
		}
		[[nodiscard]] float getVolume() {
			return playerstruct.volume;
		}
		[[nodiscard]] PlayerState getState() {
			return playerstruct.state;
		}

		void setPlaybackSpeed(float pbspeed) {
			if (pbspeed >= 0.0f) {
				this->playerstruct.playback_speed = pbspeed;
			}
		}
		
		void setVolume(float volume) {
			if (volume > 0.0f) {
				this->playerstruct.volume = volume;
			}
		}

		void setState(PlayerState state) {
			this->playerstruct.state = state;
		}

		void play() {
			setState(Plying);
		}

		void pause() {
			setState(Paused);
		}

		void stop() {
			setState(Stopped);
		}

	private:
		struct PlayerStruct {
			float playback_speed = 1.00f;
			float volume = 0.0f;
			PlayerState state = Stopped;
		} playerstruct;
	};
}