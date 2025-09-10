-- Lua script to build, run, and debug the C++ project using CMake
local project_name = "AccountChallenge"
local build_dir = "build"

function build()
    os.execute("cmake -S . -B " .. build_dir)
    os.execute("cmake --build " .. build_dir)
end

function run()
    os.execute(build_dir .. "/" .. project_name)
end

function debug()
    -- Uses lldb for debugging on macOS
    os.execute("lldb " .. build_dir .. "/" .. project_name)
end

-- Usage:
-- build()   -- to build
-- run()     -- to run
-- debug()   -- to debug

build()
run()
