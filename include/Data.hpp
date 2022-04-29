#pragma once

#include "Placement.hpp"
#include <vector>

namespace PlaceDataLib
{

    class Data
    {
    public:
        ///////////////////////
        //   Constructors    //
        ///////////////////////

        ///////////////////////
        // GETTERS / SETTERS //
        ///////////////////////
        std::vector<Placement> getPlacements();

        ///////////////////////
        // PUBLIC  FUNCTIONS //
        ///////////////////////

        // remove placement at a given index
        bool removePlacement(int index);

        // remove all placements satisfying a given rule
        bool removePlacements(bool (*rule)(Placement));

    private:
        ///////////////////////
        // PRIVATE MEMBERS   //
        ///////////////////////
        std::vector<Placement> placements;
    };

} // End Namespace