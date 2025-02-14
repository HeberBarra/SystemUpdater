// Copyright 2025 <Heber Ferreira Barra>

#include <memory>
#include "updater.hpp"
#include "updater_factory.hpp"

int main() {
    UpdaterFactory updaterFactory;
    std::unique_ptr<Updater> updater = updaterFactory.createUpdater(ZYPPPER);

    updater->update();

    return 0;
}
