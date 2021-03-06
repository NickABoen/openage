// Copyright 2014-2017 the openage authors. See copying.md for legal info.

#include "in_memory_loader.h"

#include "error.h"
#include "opus_in_memory_loader.h"


namespace openage {
namespace audio {


InMemoryLoader::InMemoryLoader(const std::string &path)
	:
	path{path} {}


std::unique_ptr<InMemoryLoader> InMemoryLoader::create(const std::string &path,
                                                       format_t format) {

	std::unique_ptr<InMemoryLoader> loader;

	// switch format and return an appropriate loader
	switch (format) {
	case format_t::OPUS:
		loader = std::make_unique<OpusInMemoryLoader>(path);
		break;
	default:
		throw audio::Error{MSG(err) << "Not supported for format: " << format};
	}

	return loader;
}

}} // openage::audio
