// grinder.cpp — part of blox-fruits-auto.

#include "bloxfruitsauto/grinder.h"

#include <cstdio>

namespace bloxfruitsauto {

Grinder::Grinder(const std::string& config_path)
    : config_path_(config_path) {}

void Grinder::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Grinder::run() {
    if (verbose_) std::fprintf(stderr, "[blox-fruits-auto] grinder: run\n");
    // core logic lives here
    return true;
}

}  // namespace bloxfruitsauto
