#ifndef UTIL_H_
#define UTIL_H_

#include "Common.h"
#include <vector>

namespace Util {
    int GetEnergy(ScreenAreaPtr* energyarea);
    int GetEnergyDigit(int digit, ScreenAreaPtr* energyarea);
    int GetRotation(const ScreenAreaPtr& area);
    std::vector<Coord> GetEnemies(ScreenAreaPtr& radar);
    bool InSafe(const ScreenAreaPtr& area, Coord coord);
    void GetClosestEnemy(const std::vector<Coord>& enemies, ScreenAreaPtr& radar, int* dx, int* dy, double* dist);
    int GetTargetRotation(int dx, int dy);
    bool PlayerInSafe(const ScreenAreaPtr& player);
}

#endif
