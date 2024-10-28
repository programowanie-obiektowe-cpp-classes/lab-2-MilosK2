#pragma once

#include "Resource.hpp"

class ResourceManager
{
    ResourceManager(Resource& resource) : resource_(resource) {
    }

    Resource& resource_;
};
