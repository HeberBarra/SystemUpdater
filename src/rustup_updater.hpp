// Copyright 2025 <Heber Ferreira Barra>
#ifndef SRC_RUSTUP_UPDATER_HPP_
#define SRC_RUSTUP_UPDATER_HPP_
#include "updater.hpp"

class RustupUpdater : public Updater {
 public:
    void update();
    ~RustupUpdater() {}
};

#endif  // SRC_RUSTUP_UPDATER_HPP_

