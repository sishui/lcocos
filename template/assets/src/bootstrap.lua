local cjson         = require "kernel.crypto.cjson"
local runtime       = require "kernel.runtime"
local timer         = require "kernel.timer"
local preferences   = require "kernel.preferences"
local window        = require "kernel.window"
local UserDefault   = require "cc.UserDefault"
local Node          = require "cc.Node"
local Sprite        = require "cc.Sprite"
local Director      = require "cc.Director"
local ActionManager = require "cc.ActionManager"
local Scheduler     = require "cc.Scheduler"

window.setDesignSize(1334, 750, 1)

function main()
    print("hello bootstrap!")

    local node = Node.create()
    print("# preferences 'build'", preferences.getString("build"))
    print("# preferences 'build'", preferences.getString("build", "defalut build"))
    print("# preferences 'version'", preferences.getString("conf.version.runtime", "defalut build"))
    print("#", node, node.referenceCount, node:getPosition())

    Director.getInstance().runningScene:addChild(node)

    local textureCache = Director.getInstance().textureCache
    textureCache:addImageAsync('res/HelloWorld.png', function (...)
        print("### textureCache addImageAsync 1", ...)
    end)
    textureCache:addImageAsync('res/HelloWorld.png', function (...)
        print("### textureCache addImageAsync 2", ...)
    end)
    textureCache:addImageAsync('res/HelloWorld1.png', function (...)
        print("### textureCache addImageAsync 3", ...)
    end)

    printUserValue(textureCache)
    textureCache:unbindImageAsync('res/HelloWorld.png')
    printUserValue(textureCache)
    textureCache:unbindAllImageAsync()
    printUserValue(textureCache)

    timer.delay(2, function ()
        printUserValue(textureCache)
    end)

    -- local sprite = Sprite.create("res/HelloWorld.png")
    -- print(sprite)

    -- sprite:setPosition(500, 400)
    -- Director.getInstance().runningScene:addChild(sprite)
end

function printUserValue(obj)
    print("print obj user value:", obj)
    for k, v in pairs(debug.getuservalue(obj)) do
        print("", k, v)
    end
end

local r = setmetatable({}, {__gc = function ()
    print("lua meta gc")
end})
