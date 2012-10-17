#TUES http://www.elsys-bg.org/
#11б
#N.10
#Георги Миленов Цанев
#Да се създаде програма, която да която да намира най-популярния и най-непопулярния човек в класа.

require 'csv'
def count
        files=Dir.glob("*.csv")
        arr=Hash.new(0);
        
        files.each do |name|
                CSV.foreach("#{name}") do |row|
                        arr["#{row[0]}"]=arr["#{row[0]}"]+1
                end
        end
	
	arr.sort_by {|number,count| count}
	for i in 1..28
		c = arr["#{i}"]
		puts ("#{i} #{c}")
	end

	puts	

	max=arr.sort_by {|number, count| count}.last
        min=arr.sort_by {|number, count| count}.first

        p max
        p min
end

count()
