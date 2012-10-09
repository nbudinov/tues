public class HelloWorld 
{

	public static void main(String [] args)
	{

		int sum = 0;
		int[] array = new int[10];
		int i = 0;
		
		for( int counter = 0; counter <= 100; counter++ )
		{
			sum += counter;

			if( counter % 2 != 0 && i < 10) 
			{
				array[i++] = counter;
			}
			
		}
		
		System.out.println(sum);
	}

}
