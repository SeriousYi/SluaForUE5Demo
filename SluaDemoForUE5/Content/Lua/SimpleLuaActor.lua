local LuaActor ={}

-- override event from blueprint
function LuaActor:ReceiveBeginPlay()
    self.bCanEverTick = true
    -- set bCanBeDamaged property in parent
    self.bCanBeDamaged = false
    print("actor:ReceiveBeginPlay")
end

-- override event from blueprint
function LuaActor:ReceiveEndPlay(reason)
    print("actor:ReceiveEndPlay")
end

return Class({}, nil, LuaActor)