--
-- CEGUI premake script
-- 

dofile("helpers.lua")

--
-- project setup
--
project.name = "CEGUI"
project.bindir = rootdir.."bin"
project.libdir = rootdir.."lib"
project.configs =
{
	"Debug",
	"ReleaseWithSymbols",
	"Release"
}

createpackages {
	"BaseSystem",
	
	["WindowRendererSets"] =
	{
		"Falagard",
	},
	
    ["XMLParserModules"] =
	{
		"expatParser",
		--"libxmlParser",
		"TinyXMLParser",
		"XercesParser",
	},
	
	["Renderers"] =
	{
	    "OpenGLGUIRenderer",
	    "DirectX9GUIRenderer",
	    --"DirectX81GUIRenderer",
	},
	
	["ImageCodecModules"] =
	{
        "TGAImageCodec",
        --"CoronaImageCodec",
        --"DevILImageCodec",
	},
	
	["ScriptingModules"] =
	{
        ["CEGUILua"] =
        {
            "lua_and_tolua++",
            "LuaScriptModule",
            "tolua++bin",
        },
	},
}

-- the end