local c_files = os.matchfiles("**.c")

local function getParentPath(_path)
    pattern1 = "^(.+)//"
    pattern2 = "^(.+)\\"

    if (string.match(_path,pattern1) == nil) then
        return string.match(_path,pattern2)
    else
        return string.match(_path,pattern1)
    end
end

local builds = {}
local configs = {}
for k, v in pairs(c_files) do
   local filename, extension = v:match("^.+/(.+)%.(.+)$")
   filename = v:gsub("/", "_")
   table.insert(builds, filename)
   table.insert(configs, {name = filename, file = v})
end

workspace "Experiments"
   configurations(builds)
   architecture "x86_64"

project "Experiments"
   kind "ConsoleApp"
   language "C"
   targetdir "bin/%{cfg.buildcfg}"

   for k, v in pairs(configs) do
      filter("configurations:" .. v.name)
      files { v.file }
      defines { "DEBUG" }
      symbols "On"
   end