class PolishC

	@input
	attr_accessor :inupt
	def initialize()
		@input = Array.new
	end

	def add_value(input)
		input=Integer(input)
		@input<<input
	end

	def add_operation(input)
		a=0
		b=0
		if input=="="
			return
		end
		a=@input.shift()
		b=@input.shift()
			if input=="+"
			result=a+b
			@input<<result
			return
		end
	end

	def reading_in()
		stop=nil
		while stop !="="
			stop=gets.chomp
			begin
				Integer(stop)
			rescue
				add_operation(stop)
			else
				add_value(stop)
			end
		end
		p @input
	end

end

PolishAdd=PolishC.new

PolishAdd.reading_in()
