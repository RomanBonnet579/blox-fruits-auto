// raids.cpp — part of blox-fruits-auto.

#include "bloxfruitsauto/raids.h"

#include <cstdio>

namespace bloxfruitsauto {

Raids::Raids(const std::string& config_path)
    : config_path_(config_path) {}

void Raids::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Raids::run() {
    if (verbose_) std::fprintf(stderr, "[blox-fruits-auto] raids: run\n");
    // core logic lives here
    return true;
}

}  // namespace bloxfruitsauto
