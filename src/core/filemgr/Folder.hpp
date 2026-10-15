#pragma once
#include "BaseObj.hpp"

namespace Teminus
{
    class Folder final : public BaseObj
    {
    public:
        Folder(const std::filesystem::path& folder);

    };
}