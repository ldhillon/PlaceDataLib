#pragma once
#include <string>
#include <iostream>
#include <Data.hpp>

/*
notes

let's just code the damn csv reader ourselves, we want to go down it linearly so whatever

we want a system where we can inform the reader of what the columns are and how many there are (enum dataType Vector)

from there we want to be able to add parsing rules (enum: function map?)
    but what if we need multiple rules for the same thing?
    just make the function more complex then!

check rules at parsing time, if they pass, add them to the Data, else toss

we can either return a vector of all of the placements or actually have some of it stored on disk 
    it will likely be necessary to use some disk storage

*/

namespace PlaceDataLib
{    
    Data LoadPlaceData(std::string csv);

} // End Namespace