"
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма за събиране на числата в колона на csv файл.
"

require 'csv'

def process_file_with_csv
	result = 0;
	CSV.foreach("/home/user/Desktop/Work/tues/h2/csv_example.csv") do |row|	
		result = result + row[1].to_i
	end
	p result
end

def process_file
        f = File.open("/home/user/Desktop/Work/tues/h2/csv_example.csv", "r")
        content = f.read
	result = 0
	content.each_line do |line|
		array = line.split(',');
		result = result + array[1].to_i
	end
	p result
end

process_file_with_csv
