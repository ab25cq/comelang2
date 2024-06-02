class DataA
    def initialize()
        @a=123
        @b=234
    end

    def show()
        puts(@a)
        puts(@b)
    end
end

data=DataA.new()

data.show()
