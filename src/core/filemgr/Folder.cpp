#include "Folder.hpp"
#include "FileMgr.hpp"

namespace Teminus
{
    Folder::Folder(const std::filesystem::path& path) :
        BaseObj(path)
    {
    }
}