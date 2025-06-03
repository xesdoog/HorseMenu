include(FetchContent)

message(STATUS "Setting up Lua")
FetchContent_Declare(
    lua
    GIT_REPOSITORY https://github.com/walterschell/Lua.git
    GIT_TAG 3ed55a56eaa05c9221f40b3c07d0e908eb1067b0
    GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(lua)
set_property(TARGET lua_static PROPERTY CXX_STANDARD 23)

message(STATUS "Setting up Sol2")
FetchContent_Declare(
    sol2
    GIT_REPOSITORY https://github.com/ThePhD/sol2.git
    GIT_TAG v3.3.0
)
FetchContent_MakeAvailable(sol2)
