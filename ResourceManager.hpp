#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
        ResourceManager() { resource_ = new Resource(); }

        ResourceManager(const ResourceManager& resMan)
        {
            resource_  = new Resource();
            *resource_ = *resMan.resource_;
        }

        ResourceManager& operator=(const ResourceManager& resMan)
        {
        *this->resource_ = *resMan.resource_;
        return *this;
        }
        ResourceManager(ResourceManager&& resMan) : resource_(resMan.resource_)
        {
        resMan.resource_ = nullptr;
        }

        ResourceManager& operator=(ResourceManager&& resMan) noexcept
        {
        delete resource_;
        resource_ = resMan.resource_;
        resMan.resource_ = nullptr;
        return *this;
        }

    ~ResourceManager() {
        if (this->resource_ != nullptr) {
            delete this->resource_;
        }
    }



    double get()
    {
        return resource_->get();
    }

    Resource* resource_=nullptr;
};

