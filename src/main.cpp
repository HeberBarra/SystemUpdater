// Copyright 2025 <Heber Ferreira Barra>

#include <cstring>
#include <memory>
#include "../headers/updater.hpp"
#include "../headers/updater_factory.hpp"

void runAllModules(UpdaterFactory updaterFactory) {
    std::unique_ptr<Updater> updater;
    for (int value = DUMMY + 1; value != DUMMY_LAST; value++) {
        UpdatersNames enumValue = static_cast<UpdatersNames>(value);
        updater = updaterFactory.createUpdater(enumValue);
        updater->update();
    }
}

void checkAvaliableUpdatesAllModules(UpdaterFactory updaterFactory) {
    std::unique_ptr<Updater> updater;
    for (int value = DUMMY + 1; value != DUMMY_LAST; value++) {
        UpdatersNames enumValue = static_cast<UpdatersNames>(value);
        updater = updaterFactory.createUpdater(enumValue);
        updater->checkAvaliableUpdates();
    }
}

int main(int argc, char *argv[]) {
    UpdaterFactory updaterFactory;

    if (argc > 1 && std::strcmp(argv[1], "--check") == 0) {
        checkAvaliableUpdatesAllModules(updaterFactory);
    } else {
        runAllModules(updaterFactory);
    }

    return 0;
}
