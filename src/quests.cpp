// quests.cpp — part of blox-fruits-auto.

#include "bloxfruitsauto/quests.h"

#include <cstdio>

namespace bloxfruitsauto {

Quests::Quests(const std::string& config_path)
    : config_path_(config_path) {}

void Quests::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Quests::run() {
    if (verbose_) std::fprintf(stderr, "[blox-fruits-auto] quests: run\n");
    // core logic lives here
    return true;
}

}  // namespace bloxfruitsauto
