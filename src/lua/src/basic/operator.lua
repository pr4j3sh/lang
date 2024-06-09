--[[
or -> looks for true statement
statment1 or statement2

if statement1 == true then
    statement1
else if statement1 == false then
    statement2
end

and -> looks for false statement
statment1 and statement2

if statement1 == true then
    statement2
else if statement1 == false then
    statement1
end
--]]

print(nil and nil)  -- nil
print(nil and true) -- nil
print(true and nil) -- nil
print(true and true)    -- true
print(nil or nil)   -- nil
print(nil or true)  -- true
print(true or nil)  -- true
print(true or true) -- true