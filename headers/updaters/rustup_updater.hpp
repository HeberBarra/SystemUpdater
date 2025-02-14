// Copyright 2025 <Heber Ferreira Barra>
#ifndef HEADERS_UPDATERS_RUSTUP_UPDATER_HPP_
#define HEADERS_UPDATERS_RUSTUP_UPDATER_HPP_
#include "../updater.hpp"

class RustupUpdater : public Updater {
 public:
    void update();
    ~RustupUpdater() {}
};

#endif  // HEADERS_UPDATERS_RUSTUP_UPDATER_HPP_

