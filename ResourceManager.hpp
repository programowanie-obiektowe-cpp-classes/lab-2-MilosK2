#pragma once

#include "Resource.hpp"

class ResourceManager
{
    ResourceManager() { resource_ = new Resource();
    }
    ResourceManager(const ResourceManager& resMan) { resource_ = resMan.resource_;
    }
    
    ResourceManager& operator=(const ResourceManager& resMan)
    { 
        return *this;
    }

    ~ResourceManager() {

    }
    double get()
    {
        return resource_->get();
    }

    Resource* resource_=nullptr;
};
