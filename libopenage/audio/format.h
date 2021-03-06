// Copyright 2014-2017 the openage authors. See copying.md for legal info.

#pragma once

#include "../gamedata/sound_file.gen.h"

namespace openage {
namespace audio {


enum class format_t {
	OPUS,
	WAV,
	MP3,
	FLAC
};

const char *format_t_to_str(format_t val);
std::ostream &operator <<(std::ostream &os, format_t val);


format_t from_format(const gamedata::audio_format_t format);


}} // openage::audio
