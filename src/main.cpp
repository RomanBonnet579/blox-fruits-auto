// main.cpp — entry point. Wires config and subsystems together.

#include "bloxfruitsauto/settings.h"
#include "bloxfruitsauto/grinder.h"
#include "bloxfruitsauto/quests.h"
#include "bloxfruitsauto/raids.h"
#include "bloxfruitsauto/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    bloxfruitsauto::Settings settings = bloxfruitsauto::Settings::load_default();
    bloxfruitsauto::Grinder grinder(settings.store_path);
    bloxfruitsauto::Quests quests(settings.store_path);
    bloxfruitsauto::Raids raids(settings.store_path);
    bloxfruitsauto::Cli cli(settings.store_path);
    std::fprintf(stderr, "[blox-fruits-auto] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
