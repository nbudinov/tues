"
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма за събиране на числата в дадена колоно спрямо стойностите на друга колона.
"

require 'csv'

def process_file_with_csv
	resultR = 0;
	resultP = 0;
	CSV.foreach("/home/user/Desktop/Work/tues/h3/csv_example1.csv") do |row|	
		if row[2] == 'Ruby'
			resultR = resultR + row[1].to_i
		end
		if row[2] == 'Python'
			resultP = resultP + row[1].to_i
		end
	end
	p resultR
	p resultP
end

def process_file
        f = File.open("/home/user/Desktop/Work/tues/h3/csv_example1.csv", "r")
        content = f.read
	result = 0
	content.each_line do |line|
		array = line.split(',');
		result = result + array[1].to_i
	end
	p result
end

process_file_with_csv
