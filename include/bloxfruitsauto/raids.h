// raids — part of blox-fruits-auto.

#pragma once

#include <string>
#include <vector>

namespace bloxfruitsauto {

class Raids {
public:
    explicit Raids(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace bloxfruitsauto
