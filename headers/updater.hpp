// Copyright 2025 <Heber Ferreira Barra>
#ifndef HEADERS_UPDATER_HPP_
#define HEADERS_UPDATER_HPP_
class Updater {
 public:
    virtual void update() = 0;
    virtual void autoConfirmUpdate() = 0;
    virtual void checkAvaliableUpdates() = 0;
    virtual ~Updater(){}
};
#endif  // HEADERS_UPDATER_HPP_
