if Object.const_defined?("Data") then puts("Data is already defined. require override class."); exit(2); end
class Data
    def initialize()
        @a=123
    end
end


data=Data.new()
