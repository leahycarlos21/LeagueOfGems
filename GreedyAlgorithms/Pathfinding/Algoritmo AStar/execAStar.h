//
// Created by leahycarlos21 on 28/10/18.
//

#ifndef PATHFINDING_EXECASTAR_H
#define PATHFINDING_EXECASTAR_H


#include "MapSearchNode.h"
#include "../../../../../Proyectos CE/Proyecto II/Proyecto 2 Repositorio Oficial/LeagueOfGems/GreedyAlgorithms/Pathfinding/coordinate.h"

class execAStar {
public:
    MapSearchNode mapSearchNode;
    void solution(MapSearchNode nodeStart,MapSearchNode nodeEnd);
    vector<coordinate> coordenadas;

};


#endif //PATHFINDING_EXECASTAR_H
