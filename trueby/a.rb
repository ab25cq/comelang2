









# comment

if Object.const_defined?("DataA") then puts("DataA is already defined. require override class."); exit(2); end
class DataA
    def initialize(a)
        @ruby="RUBY"
        @ruby2="RUBY2"

        @ruby="TRUEBY"
        puts("HELLO")
    end

    def fun()
        puts(@ruby)
        puts(@ruby2)
    end
end


b=a=123
a=123
c="123"

puts(c)

d="PRE"

puts(d)

data=DataA.new(1)
data.fun()

i=0
while(i<3) do
    puts("HO!")
    i=i+1
end





# comment

$x="Hello Global Variable"

puts("#{$x}")

3.times() do
    puts("UHO!")
end




puts("A,A,A".split(","))

p("NO CHECK TYPE")

xxx="AAA".sub("A","B")

puts(xxx)

xxx2="AAA".gsub(/A/,"B")

puts(xxx2)

