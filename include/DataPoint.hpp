#pragma once
#include <dataFormat.hpp>
#include <iostream>
#include <memory>
namespace PlaceDataLib
{

    class DataPoint
    {
        
    };




    // use template metaprogramming to convert enum to desired storage type
    template<dataFormat format, typename type = typename TypeSelector<format>::type>
    class FormattedDataPoint : DataPoint
    {
    public:

        FormattedDataPoint(type data)
        {
            this->data = data;
        }

        operator type () const
        {
            return data;
        }
        
        void operator= (type other)
        {
            data = other;
        }

        //store value in a smart pointer.
        type data;
    };

} // End Namespace