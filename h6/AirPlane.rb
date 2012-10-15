"
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се създаде програма, която да запълва празните места в самолет, като х(пътници) да е в интервала 1<=х<=3. Всяка група пътници не трябва да сe разделя от пътеката, или реда.
"

class AirPlane
	def initialize()
		@seats = Hash.new(0)
	end

	def print_seats()
		for row in 0..26
			for col in 0..5
				print("#{@seats["#{col},#{row}"]}")
				if col==2
					print(" ")
				end
			end
			print("\n")
		end
	end

	def add(rvalue)
		for col in 0..rvalue-1
			@seats[ "#{col},#{0}" ] = rvalue
		end
	end

	def add(rvalue)
		catch(:stop) do
			for row in 0..26
				for col in 0..5
					if @seats["#{col},#{row}"] == 0
						if col<=2 && col+rvalue-1>2
							next
						elsif col+rvalue-1>5
							break
						elsif @seats["#{col+rvalue-1},#{row}"]==0
							for x in col..col+rvalue-1
								@seats["#{x},#{row}"] =rvalue;
							end
							throw :stop
						end
					end
				end
			end
		end
	end

	def freeSeats()
		sum=0
		for row in 0..26
			for col in 0..5
				if @seats["#{col},#{row}"]==0
					sum=sum+1
				end
			end
		end
		return sum
	end

end

plane = AirPlane.new()
plane.print_seats()
puts "*******"
while plane.freeSeats()>0
		rvalue = rand(3)+1
		if plane.freeSeats()-rvalue >=0
			plane.add(rvalue)
		end
end
plane.print_seats()
