/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се създаде програма, която да запълва празните места в самолет, като х(пътници) да е в интервала 1<=х<=3. Всяка група пътници не трябва да сe разделя от пътеката, или реда.
*/

import java.util.Random;

public class AirPlane{
	private int[][] seats=new int [6][27];

	public void add(int rvalue){
		int row=0;
		int col=0;
		add_seat:{
			for(row=0;row<27;row++){
				for(col=0;col<6;col++){
					if(seats[col][row]==0){
						if(col<=2 & col+rvalue-1>2){
							continue;
						}
						else if(col+rvalue-1>5){
							break;
						}
						else if(seats[col+rvalue-1][row]==0){
							for(int x=col;x<col+rvalue;x++){
								seats[x][row]=rvalue;
							}
						break add_seat;
						}
					}
				}
			}
		}
	}

	public int freeSeats(){
		int sum=0;
		for(int row=0;row<27;row++){
			for(int col=0;col<6;col++){
				if(seats[col][row]!=0){
					sum+=1;
				}
			}
		}
		return 162-sum;
	}

	public void printSeats(){
		for(int row=0;row<27;row++){
			for(int col=0;col<6;col++){
				System.out.print(seats[col][row]);
				if(col==2) System.out.print(" ");
			}
			System.out.println("");
		}
	}

	public static void main(String[] args){
		AirPlane plane=new AirPlane();
		plane.printSeats();
		for (;plane.freeSeats()>0;){
			int rvalue = new Random().nextInt(3)+1;
			if(plane.freeSeats()-rvalue >=0){
				plane.add(rvalue);
			}
		}
		System.out.println("*******");
		plane.printSeats();
	}

}
