puts "hello world"
class Test
    def say
        puts "hello world"
    end
end

a = Test.new
a.say

100.times do |n|
    a.say
end
