#pragma once

typedef struct Interfaces {
    void** client;
    void** engine;
    void** entityList;
    void** gameUI;
} Interfaces;

void initializeInterfaces();

extern Interfaces interfaces;