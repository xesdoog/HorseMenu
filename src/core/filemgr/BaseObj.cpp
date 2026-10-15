#include "BaseObj.hpp"

namespace Teminus
{
    BaseObj::BaseObj(const std::filesystem::path& path) :
        m_Path(path)
    {
    }

    [[nodiscard]] bool BaseObj::Exists() const
    {
        return exists(m_Path);
    }

    const std::filesystem::path& BaseObj::Path() const
    {
        return m_Path;
    }
}