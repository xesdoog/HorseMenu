#pragma once
#include "BaseObj.hpp"

namespace Teminus
{
    class File final : public BaseObj
    {
    public:
        File(const std::filesystem::path& path);
        File Move(std::filesystem::path newPath);

    };
}